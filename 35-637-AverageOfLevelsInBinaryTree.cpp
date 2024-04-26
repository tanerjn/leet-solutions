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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> averages;
    if (root == nullptr) {
        return averages;
    }

    vector<TreeNode*> level;
    level.push_back(root);

    while (!level.empty()) {
        double sum = 0;
        vector<TreeNode*> nextLevel;
        for (TreeNode* node : level) {
            sum += node->val;
            if (node->left) {
                nextLevel.push_back(node->left);
            }
            if (node->right) {
                nextLevel.push_back(node->right);
            }
        }
        averages.push_back(sum / level.size());
        level = nextLevel;
    }

    return averages;
}
};
