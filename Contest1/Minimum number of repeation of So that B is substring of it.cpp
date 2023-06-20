bool check(string &A,string &B)
    {
        for(int i=0;i<=A.length()-B.length();i++)
        {
            string temp=A.substr(i,B.length());
            if(temp==B)return true;
        }
        return false;
    }
    int minRepeats(string A, string B) {
        // code here
        int k=1;
        int len_A=A.length();
        int len_B=B.length();
        string final=A;
        while(final.length()<B.length())
        {
            final+=A;
            k++;
        }
        if(check(final,B))return k;
        
        final+=A;
        k++;
        if(check(final,B))return k;
        
        return -1;
        
    }