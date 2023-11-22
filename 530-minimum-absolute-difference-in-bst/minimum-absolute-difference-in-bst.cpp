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
    vector <int> tmp;
    void LNR(TreeNode* root)
    {
        if (!root) return;
        LNR(root->left);
        tmp.push_back(root->val);
        LNR(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        LNR(root);
        int min = tmp[1] - tmp[0];
        int n = tmp.size();
        for (int i = 2; i < n; i++)
        {
            if (tmp[i] - tmp[i - 1] < min) min = tmp[i] - tmp[i - 1];
        }
        return min;
    }
};