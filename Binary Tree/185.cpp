void helper(Node* root,int level,vector<int>&ans){
   if(root==NULL) return;
   if(ans.size()==level) ans.push_back(root->data);
   helper(root->left,level+1,ans);
   helper(root->right,level+1,ans);
}

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>ans;
   helper(root,0,ans);
   return ans;
}
