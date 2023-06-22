void connect(Node *root)
    {
       // Code Here
       queue<Node*> q;
       q.push(root);
       while(q.size())
       {
           int size=q.size();
           while(size)
           {
               Node* front=q.front();
               q.pop();
               size=size-1;
               if(front && size==0)
               {
                   front->nextRight=NULL;
               }
               else if(front)
               {
                   front->nextRight=q.front();
               }
               if(front && front->left)
               {
                   q.push(front->left);
               }
               if(front && front->right)
               {
                   q.push(front->right);
               }
            }
       }
       return;
    }    