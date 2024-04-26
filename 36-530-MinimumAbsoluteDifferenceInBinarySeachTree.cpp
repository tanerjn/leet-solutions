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
    int getMinimumDifference(TreeNode* root) {
        int min_diff = INT_MAX;
        int prev_val = -1; // Initialize with a value not present in the tree
        
        // In-order traversal function
        function<void(TreeNode*)> inorderTraversal = [&](TreeNode* node) {
            if (node == nullptr)
                return;

            inorderTraversal(node->left);

            if (prev_val != -1) {
                min_diff = min(min_diff, abs(node->val - prev_val));
            }

            prev_val = node->val;

            inorderTraversal(node->right);
        };
        
        inorderTraversal(root);
        
        return min_diff;
    }
};
