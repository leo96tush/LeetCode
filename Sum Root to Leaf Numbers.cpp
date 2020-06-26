/*
Recursive Value Addition
*/

class Solution {
public:
    int helper(TreeNode* node, int value) {
        if (!node) return 0 ;

        value = (10 * value) + (node->val) ;

        if (node->left == NULL && node->right == NULL) return value ;

        return helper(node->left, value) + helper(node->right, value) ;
    }

    int sumNumbers(TreeNode* root) {
        return helper(root, 0) ;
    }
};

/*
Creating strings from Root to Leaf
*/

class Solution {
public:
    vector<string> res ;

    void helper(TreeNode* node , string s) {

        if (!node) return ;

        s = s + to_string(node->val) ;

        if (node->left == NULL && node->right == NULL) res.push_back(s) ;

        helper(node->left, s) ;

        helper(node->right, s) ;

    }


    int sumNumbers(TreeNode* root) {

        helper(root, "") ;

        int sum = 0 ;

        for ( string k : res ) {
            sum += stoi(k) ;
        }

        return sum ;
    }
};