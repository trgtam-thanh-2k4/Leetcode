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
    void dfs(TreeNode* root, int& sum, int& num)
    {
        if (!root) return;

        if (!root->left && !root->right) 
        {
            sum += num * 10 + root->val;
            return;
        }

        num = num * 10 + root->val;

        dfs(root->left, sum, num);
        dfs(root->right, sum, num);

        num /= 10;
    }
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        int num = 0;

        dfs(root, sum, num);

        return sum;
    }
};