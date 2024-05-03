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
    vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> result;

    // Helper function for inorder traversal
    std::function<void(TreeNode*)> inorderTraversalHelper = [&](TreeNode* node) {
        if (node == nullptr) {
            return;
        }

        // Traverse left subtree
        inorderTraversalHelper(node->left);

        // Visit current node
        result.push_back(node->val);

        // Traverse right subtree
        inorderTraversalHelper(node->right);
    };

    // Call the helper function
    inorderTraversalHelper(root);

    return result;
    }
};
