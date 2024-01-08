class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p and !q){
            return true;
            
        }
            if(p and q){
                return (p->val==q->val)
                && isSameTree(p->left,q->left)
                && isSameTree(p->right,q->right);
                
            }
            
            return false;
        
            
            
            
    }
};