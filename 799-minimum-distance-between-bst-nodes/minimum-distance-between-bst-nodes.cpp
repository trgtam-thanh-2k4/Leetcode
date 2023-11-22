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
    vector<int> res;
    void LNR(TreeNode* root)
    {
        if (!root) return;
        LNR(root->left);
        res.push_back(root->val);
        LNR(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        LNR(root);
        int n = res.size();
        int min = res[1] - res[0];
        for (int i = 2; i < n; i++)
        {
            if (res[i] - res[i - 1] < min) min = res[i] - res[i - 1];
        }
        return min;
    }
};