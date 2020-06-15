struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

/*
Iterative Approach
*/

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while (root && root->val != val) {
            if (root->val < val) root = root->right ;
            else if (root->val > val) root = root->left ;
        }
        return root ;
    }
};

/*
Recursive Approach
*/

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (!root) return NULL ;

        TreeNode* curr = root ;

        if (curr->val == val) return curr ;
        else if (root->val > val) curr = searchBST(root->left, val) ;
        else if (root->val < val) curr = searchBST(root->right, val) ;

        return curr ;
    }
};

/*
Inorder Traversal
*/
class Solution {
public:
    vector<TreeNode*> vec ;

    void inOrder(TreeNode* node) {
        if (!node) return ;
        inOrder(node->left) ;
        vec.push_back(node) ;
        inOrder(node->right) ;
    }


    TreeNode* searchBST(TreeNode* root, int val) {
        inOrder(root) ;
        for ( TreeNode* node : vec ) {
            if (node->val == val) {
                return node ;
            }
        }

        return NULL ;
    }
};