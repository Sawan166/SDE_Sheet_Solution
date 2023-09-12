class Solution {
public:
    void recursive(TreeNode* root, vector<int> &vec){
        if(root){
            recursive(root->left, vec);
            recursive(root->right, vec);
            vec.push_back(root->val);
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vec;
        recursive(root,vec);
        return vec;
    }
};
