class Solution {
public:
    bool isPossible(TreeNode* root, long long l, long long r){
        if(root==NULL) return true;
        if(root->val<r && root->val>l){
            return isPossible(root->left,l,root->val)&& isPossible(root->right,root->val,r);
        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
        long long int mn=LONG_MIN,mx=LONG_MAX;
        return isPossible(root,mn,mx);
    }
};
