// Last updated: 30/10/2026, 11:37:39 PM
class Solution {
public:
    bool helper(TreeNode* root, TreeNode* min, TreeNode* max) {
        if(root == NULL)
            return true;

        if(min != NULL && root->val <= min->val)
            return false;

        if(max != NULL && root->val >= max->val)
            return false;

        return helper(root->right, root, max) &&
               helper(root->left, min, root);
    }

    bool isValidBST(TreeNode* root) {
        return helper(root, NULL, NULL);
    }
};