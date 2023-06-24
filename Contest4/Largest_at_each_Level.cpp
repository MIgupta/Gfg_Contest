vector<int> maximumValue(Node* node) {
        //code here
        
        queue<Node*> q;
        q.push(node);
        
        vector<int> res;
        
        while(q.size())
        {
            int size=q.size();
            
            int mx=0;
            while(size--)
            {
                Node* f=q.front();
                mx=max(mx,f->data);
                q.pop();
                if(f->left)q.push(f->left);
                if(f->right)q.push(f->right);
                
            }
            res.push_back(mx);
        }
        return res;
        
    }