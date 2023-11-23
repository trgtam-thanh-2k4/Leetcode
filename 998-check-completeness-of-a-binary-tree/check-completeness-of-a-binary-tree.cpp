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
    bool isCompleteTree(TreeNode* root) {
        if (!root) return true;
        queue<TreeNode*> q;
        q.push(root);
        int flag = 0;
        while (!q.empty())
        {
            TreeNode* tmp = q.front();
            q.pop();
            if (!tmp->left && tmp->right) return false;
            else if (tmp->left && !tmp->right) 
            {
                if (flag == 1) return false;
                flag = 1;
                q.push(tmp->left);
            }
            else if (tmp->left && tmp->right)
            {
                if (flag == 1) return false;
                q.push(tmp->left);
                q.push(tmp->right);
            }
            else flag = 1;
        }
        return true;
    }
};