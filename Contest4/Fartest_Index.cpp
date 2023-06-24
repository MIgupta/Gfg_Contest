vector<int> farNumber(int N,vector<int> Arr){
        //code here
        vector<int> res(N,-1);
        
        vector<int> suf(N,0);
        suf[N-1]=Arr[N-1];
        for(int i=N-2;i>=0;i--)
        {
            if(suf[i+1]<Arr[i])
            {
                suf[i]=suf[i+1];
            }
            else
            {
                suf[i]=Arr[i];
            }
        }
        for(int i=0;i<N;i++)
        {
            int target=Arr[i];
            
            int start=i+1;
            int end=N-1;
            while(start<=end)
            {
                int mid=end+(start-end)/2;
                if(suf[mid]<target)
                {
                    res[i]=mid;
                    start=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }
        }
        return res;
    }