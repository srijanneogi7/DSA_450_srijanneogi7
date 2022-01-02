vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int>ans;
      queue<Node*>N;
      if(node==NULL) return ans;
      N.push(node);
      while(!N.empty()){
        Node* curr=N.front();
        ans.push_back(curr->data);
        if(curr->left!=NULL) N.push(curr->left); 
        if(curr->right!=NULL) N.push(curr->right);
        N.pop(); 
      }
      return ans;
    }
