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
private:
    int findHeight(TreeNode* node){
        if(!node) return 0;

        int leftHeight = findHeight(node->left);
        int rightHeight = findHeight(node->right);

        if(leftHeight == -1 || rightHeight == -1 || abs(leftHeight -  rightHeight) > 1) return -1;
        return 1 + max(leftHeight,rightHeight);
    }
public:
    bool isBalanced(TreeNode* root) {
        return findHeight(root) != -1;
    }
};