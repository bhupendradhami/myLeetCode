class Solution {
public:
    bool valid(TreeNode* root, long long left, long long right) {
        if (root == nullptr)
            return true;

        if ((root->val <= left) || (root->val >= right)) {
            return false;
        }

        return (valid(root->left, left, root->val) && valid(root->right, root->val, right));
    }
    bool isValidBST(TreeNode* root) {
        return valid(root, LLONG_MIN, LLONG_MAX);
        //            left boundary, right boundary
    }
};