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
    bool findTarget(TreeNode* root, int k) {
        LNR(root);
        int i = 0;
        int j = res.size() - 1;
        int sum = 0;
        while (i < j)
        {
            sum = res[i] + res[j];
            if (sum == k) return true;
            else if (sum > k) j--;
            else i++;
        }
        return false;
    }
    
};