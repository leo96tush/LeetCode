class Solution {
public:
    vector<int> res ;

    unordered_map<int, vector<int>> um ;
    unordered_map<int, bool> vis ;

    void construct(TreeNode* root) {
        if (!root) return ;
        if (root->left) {
            um[root->val].push_back(root->left->val) ;
            um[root->left->val].push_back(root->val) ;
        }
        if (root->right) {
            um[root->val].push_back(root->right->val) ;
            um[root->right->val].push_back(root->val) ;
        }
        construct(root->left) ; construct(root->right) ;
    }

    void solve(int target , int K) {
        if (vis[target] == true) return ;
        vis[target] = true ;
        if (K == 0) {
            res.emplace_back(target) ;
        }
        else {
            for (auto &x : um[target]) {
                solve(x, K - 1) ;
            }
        }
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
        construct(root) ;
        solve(target->val, K) ;
        return res ;
    }
};