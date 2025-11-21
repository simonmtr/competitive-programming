/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int goodNodes(TreeNode* root) {
        return checkSubtree(root, root->val);
    }
    
    int checkSubtree(TreeNode* root, int greatestAbove) {
        if (!root) {
            return 0;
        }
        int res = root->val>=greatestAbove ? 1 : 0;
        greatestAbove = max(greatestAbove, root->val);
        res += checkSubtree(root->left, greatestAbove);
        res += checkSubtree(root->right, greatestAbove);
        return res;
    }
};