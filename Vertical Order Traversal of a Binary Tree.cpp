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
    vector<vector<int>> my_dummy ;

    int min_level = 0 , max_level = 0 ;

    void traverse(TreeNode* root, int x_level , int y_level) {
        if (!root) return ;
        min_level = min(min_level, x_level) ;
        max_level = max(max_level, x_level) ;
        my_dummy.push_back({x_level, y_level, root->val}) ;
        if (root->left) {
            traverse(root->left, x_level - 1, y_level + 1) ;
        }
        if (root->right) {
            traverse(root->right, x_level + 1, y_level + 1) ;
        }
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        traverse(root, 0, 0) ;
        vector<vector<int>> res(max_level - min_level + 1) ;
        sort(my_dummy.begin(), my_dummy.end()) ;

        for ( vector<int> vec : my_dummy ) {
            int a = vec[0] , b = vec[1] , c = vec[2] ;
            cout << a << " " << b << " " << c << endl ;
            res[a + abs(min_level)].push_back(c) ;
        }

        return res ;
    }
};