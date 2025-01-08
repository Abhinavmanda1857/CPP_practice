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
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;//as for 0, it gives wrong ans for all negative nodes
        maxp(root,maxi);
        return maxi;
    }
    int maxp(TreeNode* root,int &maxi){
        if(root==NULL)return 0;
        int lsum=max(0,maxp(root->left,maxi));
        int rsum=max(0,maxp(root->right,maxi));
        maxi=max(maxi,lsum+rsum+root->val);
        return root->val+max(lsum,rsum);
    }
};