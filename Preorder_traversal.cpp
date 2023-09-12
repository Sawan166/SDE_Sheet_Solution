lass Solution {
public:
    void recursive(TreeNode* root, vector<int> &vec){
        if(root){
            recursive(root->left, vec);
            vec.push_back(root->val);
            recursive(root->right, vec);
        }
    }  
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vec;
        recursive(root, vec);
        return vec;
    }
};
