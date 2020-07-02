class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {

        vector<vector<int>> res ;

        if (!root) return res ;

        queue<TreeNode*> q ;
        q.push(root) ;

        while ( !q.empty() ) {

            vector<int> dummy ;

            int size = q.size() ;

            while (size--) {
                TreeNode* curr = q.front() ; q.pop() ;
                dummy.push_back(curr->val) ;
                if (curr->left) q.push(curr->left) ;
                if (curr->right) q.push(curr->right) ;
            }

            res.push_back(dummy) ;

        }
        reverse(res.begin(), res.end());

        return res ;
    }
};