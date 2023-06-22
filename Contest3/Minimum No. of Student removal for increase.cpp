int removeStudents(int H[], int n) {
        // code here
        vector<int> temp;
        
        temp.push_back(H[0]);
        for(int i=1;i<n;i++)
        {
            if(H[i]>temp.back())
            {
                temp.push_back(H[i]);
            }
            else
            {
                int idx=lower_bound(temp.begin(),temp.end(),H[i])-temp.begin();
                
                temp[idx]=H[i];
            }
            
        }
        // for(auto x:temp)cout<<x<<" ";
        return n-temp.size();
    }