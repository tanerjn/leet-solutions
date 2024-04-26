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
    bool isSameTree(TreeNode* p, TreeNode* q) {
         // If both trees are empty, they are considered the same
    if (p == nullptr && q == nullptr) {
        return true;
    }
    // If one of the trees is empty but the other is not, they are not the same
    if (p == nullptr || q == nullptr) {
        return false;
    }
    // If the values of the current nodes are not equal, they are not the same
    if (p->val != q->val) {
        return false;
    }
    // Recursively check the left and right subtrees
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
