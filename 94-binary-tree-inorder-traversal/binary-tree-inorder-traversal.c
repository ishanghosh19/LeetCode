#include <stdlib.h>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

// Helper function to recursively perform inorder traversal
void traverse(struct TreeNode* root, int* result, int* index) {
    if (root == NULL) {
        return;
    }
    
    traverse(root->left, result, index);
    
    result[(*index)++] = root->val;
    
    traverse(root->right, result, index);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * 100);
    *returnSize = 0;
    
    traverse(root, result, returnSize);
    
    return result;
}