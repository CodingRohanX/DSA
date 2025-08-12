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
    void rec(TreeNode* root, int l, int h,int &x){
        if(root==NULL) return;
        if(root->val>=l && root->val<=h) x+=root->val;
        if(root->left!=NULL && root->left->val<l){
            rec(root->left->right,l,h,x);
        }
        if(root->left!=NULL && root->left->val>=l){
            rec(root->left,l,h,x);
        }
        if(root->right!=NULL && root->right->val>h){
            rec(root->right->left,l,h,x);
        }
        if(root->right!=NULL && root->right->val<=h){
            rec(root->right,l,h,x);
        }
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        int n=0;
        rec(root,low,high,n);
        return n;
    }
};