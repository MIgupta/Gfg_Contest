vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> res(n,-1);
        
        stack<long long > st;
        int i=n-1;
        
        while(i>=0)
        {
            
            while(st.size() && st.top()<=arr[i])
            {
                st.pop();
            }
            if(st.size())
            {
                res[i]=st.top();
            }
            else
            {
                res[i]=-1;
            }
            st.push(arr[i]);
            i--;
        }
        return res;
    }