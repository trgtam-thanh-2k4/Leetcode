/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    // TreeNode* search(TreeNode* cloned, TreeNode* target)
    // {
    //     if (!cloned) return nullptr;
    //     if (cloned->val == target->val) return cloned;
    //     else if (cloned->val > target->val) return search(cloned->left, target);
    //     else return search(cloned->right, target);
    // }
    TreeNode* ans;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if (!cloned) return nullptr;
        if (cloned->val == target->val) ans = cloned;
        getTargetCopy(original, cloned->left, target);
        getTargetCopy(original, cloned->right, target);
        return ans;
    }
};