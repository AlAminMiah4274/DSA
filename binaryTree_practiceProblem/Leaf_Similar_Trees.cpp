/*
Consider all the leaves of a binary tree, from left to right order,
the values of those leaves form a leaf value sequence.

For example, in the given tree above, the leaf value sequence is (6, 7, 4, 9, 8).
Two binary trees are considered leaf-similar if their leaf value sequence is the same.
Return true if and only if the two given trees with head nodes root1 and root2 are leaf-similar.

Example 1:
Input: root1 = [3,5,1,6,2,9,8,null,null,7,4], root2 = [3,5,1,6,7,4,2,null,null,null,null,null,null,9,8]
Output: true

Example 2:
Input: root1 = [1,2,3], root2 = [1,3,2]
Output: false

Constraints:
The number of nodes in each tree will be in the range [1, 200].
Both of the given trees will have values in the range [0, 200].
*/

/*
class Solution {
public:

    void leaf_node_value(TreeNode *root, vector<int> &v){
        if (root == NULL) return;
        if (root->left == NULL && root->right == NULL){
            v.push_back(root->val);
        }
        leaf_node_value(root->left, v);
        leaf_node_value(root->right, v);
        return;
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;
        leaf_node_value(root1, v1);
        leaf_node_value(root2, v2);

        if (v1.size() != v2.size()) return false;
        for (int i = 0; i < v1.size(); i++){
            if (v1[i] != v2[i]) return false;
        }
        return true;
    }
};
*/