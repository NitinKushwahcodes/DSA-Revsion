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
    int help(TreeNode* root){
        if(root == NULL){
            return 0;
        }

        int left = help(root->left);
        if(left == -1){
            return -1;
        }
        int right = help(root->right);
        if(right == -1){
            return -1;
        }
        if(abs(left-right) > 1){
            return -1;
        }
        else return 1+max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        if(help(root) == -1) return false;
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna