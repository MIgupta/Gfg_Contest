//   Same as Camara in binary tree


void dfs(int src,int par,vector<int> &vis,vector<vector<int>> &adj)
    {
        for(auto x:adj[src])
        {
            if(x!=par)
            {
                dfs(x,src,vis,adj);
            }
        }
        bool flag=0;
        for(auto x:adj[src])
        {
            if(x!=par)
            {
                flag=1;
                if(vis[x]==0)
                {
                    vis[src]=1;
                    break;
                }
            }
        }
        if(!flag)
        {
            vis[src]=0;
        }
        return;
    }
    int countVertex(int N, vector<vector<int>>edges){
        // code here
        
        vector<vector<int>> adj(N+1);
        
        for(int i=0;i<edges.size();i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> vis(N+1,0);
        
        dfs(1,-1,vis,adj);
        
        int c=0;
        for(int i=0;i<N+1;i++)
        {
            if(vis[i]==1)c++;
        }
        return c;
    }