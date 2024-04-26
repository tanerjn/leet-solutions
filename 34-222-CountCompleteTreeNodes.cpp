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
    int countNodes(TreeNode* root) {
        if (root == nullptr) {
        return 0;
    }

    int height = 0;
    TreeNode* current = root;
    while (current->left != nullptr) {
        height++;
        current = current->left;
    }

    if (height == 0) {
        return 1; // Single node tree
    }

    int left = 0, right = (1 << height) - 1; // 2^height - 1
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int nodeExists = 0;
        TreeNode* node = root;
        for (int i = 0; i < height; ++i) {
            int child = mid & (1 << (height - i - 1));
            if (child) {
                node = node->right;
            } else {
                node = node->left;
            }
            if (node == nullptr) {
                nodeExists = 0;
                break;
            } else {
                nodeExists = 1;
            }
        }
        if (nodeExists) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return (1 << height) - 1 + left;
}
};
