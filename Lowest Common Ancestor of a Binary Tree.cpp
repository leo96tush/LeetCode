/**
* Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

  bool findPath(TreeNode* node, vector<TreeNode*> &path, TreeNode *nodecheck){
    if(!node)
      return false;
    path.push_back(node);

    if(node == nodecheck || findPath(node->left, path, nodecheck) || findPath(node->right, path, nodecheck)){
      return true;
    }

    path.pop_back();

    return false ;

  }

  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    vector<TreeNode*> path1, path2;

    findPath(root, path1, p);
    findPath(root, path2, q);

    int i = 0 ;

    while( i<min(path1.size() , path2.size()) && path1[i] == path2[i] ){
      i++ ;
    }

    return path1[i-1] ;

  }
};