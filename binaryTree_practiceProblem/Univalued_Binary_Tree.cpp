/*
A binary tree is uni-valued if every node in the tree has the same value.
Given the root of a binary tree, return true if the given tree is uni-valued, or false otherwise.

Example 1:
Input: root = [1,1,1,1,1,null,1]
Output: true

Example 2:
Input: root = [2,2,2,5,2]
Output: false

Constraints:
The number of nodes in the tree is in the range [1, 100].
0 <= Node.val < 100
*/

/*
bool isSameValue(TreeNode *root, int value){
   queue<TreeNode *> q;
   q.push(root);
   bool flag = true;

   while (!q.empty()){
    TreeNode *node = q.front();
    q.pop();

    if (node->val != value){
        flag = false;
    }

    if (node->left){
        q.push(node->left);
    }
    if (node->right){
        q.push(node->right);
    }
   }

   return flag;
}

class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        int value = root->val;
       bool result = isSameValue(root, value);
       return result;
    }
};
*/