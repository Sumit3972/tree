class Solution {
public:
bool isbalanced=true;
int height (TreeNode* root){
    if(root==NULL){
        return 0;

    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(isbalanced and abs(lh-rh)>1){
        isbalanced=false;

    }
    int ans=1+max(lh,rh);
    return ans;


}
    bool isBalanced(TreeNode* root) {
        height(root);
        return isbalanced;
    }
};