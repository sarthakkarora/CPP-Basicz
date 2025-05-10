
class Solution {
    public:
        bool isValidBST(TreeNode* root) {
            TreeNode* prev = nullptr;
            stack<TreeNode*> st;
            while (root || !st.empty()) {
                while (root) {
                    st.push(root);
                    root = root->left;
                }
                root = st.top();
                st.pop();
                if (prev && root->val <= prev->val) return false;
                prev = root;
                root = root->right;
            }
            return true;
        }

    };
    
    
