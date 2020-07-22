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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans ;

        if (!root) return ans ;

        queue<TreeNode*> q ;

        q.push(root) ;

        int flag = 0 ;

        while (!q.empty()) {
            int size = q.size() ;
            vector<int> dummy ;
            while (size--) {
                TreeNode* curr = q.front() ; q.pop() ;
                dummy.push_back(curr->val) ;
                if (curr->left) q.push(curr->left) ;
                if (curr->right) q.push(curr->right) ;
            }
            if (flag == 0) {
                ans.push_back(dummy) ;
            }
            else {
                reverse(dummy.begin(), dummy.end()) ;
                ans.push_back(dummy) ;
            }
            flag = 1 - flag ;
        }
        return ans ;
    }
};