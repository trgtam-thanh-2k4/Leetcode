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
    int count = 0;
    int countNodeValue(TreeNode* root)
    {
        if (!root) return 0;
        return root->val + countNodeValue(root->left) + countNodeValue(root->right);
    }
    int countNode(TreeNode* root)
    {
        if (!root) return 0;
        return 1 + countNode(root->left) + countNode(root->right);
    }
    void NLR(TreeNode* root)
    {
        if (!root) return;
        if (floor(countNodeValue(root) / countNode(root)) == root->val) count++;
        NLR(root->left);
        NLR(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        // if (!root) return 0;
        // int sum = root->val + countNodeValue(root->left) + countNodeValue(root->right);
        // int nodes = 1 + countNode(root->left) + countNode(root->right);
        // int avg = floor(sum / nodes);
        // if (avg == root->val) return 1 + averageOfSubtree(root->left) + averageOfSubtree(root->right);
        // return averageOfSubtree(root->left) + averageOfSubtree(root->right);
        NLR(root);
        return count;
    }
};
