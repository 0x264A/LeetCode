//Given the root of a binary tree, check whether it is a mirror of itself 
//(i.e., symmetric around its center).


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
    bool isSymmetric(TreeNode* root) {
        return recCheck(root->left,root->right);
    }
    
    bool recCheck(TreeNode* left, TreeNode* right) {
        if(left == NULL && right == NULL) {
            return true;
        }
        if(left == NULL || right == NULL || left->val != right->val) {
            return false;
        }
        return recCheck(left->left,right->right) && recCheck(left->right,right->left);
    }
};