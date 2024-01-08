class Solution {
public:
    bool is_mirror(TreeNode* p,TreeNode* q)
    {
      if(!p && !q){
          return true;
          
      }  
        if( p and q){
            return (p->val==q->val)
            and is_mirror(p->left,q->right)
        and is_mirror(p->right,q->left);
        }
        return false;
        
    }
    
    bool isSymmetric(TreeNode* root) {
        return is_mirror(root->left,root->right);
        
    }
};