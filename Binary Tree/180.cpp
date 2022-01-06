//CONSIDERING ONLY NODES
int ma;
class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node* node){
        if(!node) return 0;
        int l=height(node->left);
        int h=height(node->right);
        ma =max(ma,l+h+1);
        return max(l,h)+1;
    }
    int diameter(Node* root) {
        // Your code here
        ma=INT_MIN;
        height(root);
        return ma;
    }
};

//CONSIDERING ONLY EDGES
int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
    
    int height(TreeNode* node,int& dia){
        if(node==NULL) return 0;
        int lh=height(node->left,dia);
        int rh=height(node->right,dia);
        dia=max(dia,lh+rh);
        return 1+max(lh,rh);
    }
