/*
You are given the root of a binary tree that consists of
exactly 3 nodes: the root, its left child, and its right child.

Return true if the value of the root is equal to the sum
of the values of its two children, or false otherwise.

Example 1:
Input: root = [10,4,6]
Output: true

Example 2:
Input: root = [5,3,1]
Output: false

Constraints:
The tree consists only of the root, its left child, and its right child.
-100 <= Node.val <= 100
*/

/*
int level_order(TreeNode *root){
    queue<TreeNode *> q;
    q.push(root);
    int sum = 0;

    while (!q.empty()){
        TreeNode *node = q.front();
        q.pop();

        if (node->left && node->right){
            sum += node->left->val + node->right->val;
        }

        if (node->left){
            q.push(node->left);
        }
        if (node->right){
            q.push(node->right);
        }
    }

    return sum;
}

class Solution {
public:
    bool checkTree(TreeNode* root) {
        int result = level_order(root);
        if (result == root->val){
            return true;
        }
        else {
            return false;
        }
    }
};
*/