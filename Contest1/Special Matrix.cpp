int minMoves(int n, vector<vector<int>>matrix){
        // code here
        vector<int> temp;
        for(int i=0;i<=50;i++)
        {
             temp.push_back((i*(i+1))/2);
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int move=0;
            
            for(int j=0;j<n;j++)
            {
                // int least=INT_MAX;
                // for(auto it:temp)
                // {
                    int x=upper_bound(temp.begin(),temp.end(),matrix[i][j])-temp.begin();
                    move+=min(abs(matrix[i][j]-temp[x]),abs(matrix[i][j]-temp[x-1]));
                // }
                // move=move+least;
            }
            ans=min(ans,move);
        }
        for(int i=0;i<n;i++)
        {
            int move=0;
            
            for(int j=0;j<n;j++)
            {
                int x=upper_bound(temp.begin(),temp.end(),matrix[j][i])-temp.begin();
                    move+=min(abs(matrix[j][i]-temp[x]),abs(matrix[j][i]-temp[x-1]));
                // move=move+least;
            }
            ans=min(ans,move);
        }
        return ans;
    }