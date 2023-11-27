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
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return {};
        vector<int> res;
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty())
        {
            int n = q.size();

            for (int i = n; i > 0; i--)
            {
                TreeNode* t = q.front();
                q.pop();
                if(i == n) res.push_back(t->val);
                if (t->right) q.push(t->right);
                if (t->left) q.push(t->left);
            }
        }

        return res;
    }
};