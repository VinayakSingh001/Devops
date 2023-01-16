#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        if(root==p||root==q){
            return root;
        }
        TreeNode* lca1 = lowestCommonAncestor(root->left,p,q);
        TreeNode* lca2 = lowestCommonAncestor(root->right,p,q);
        // if(lca1!=NULL&&lca2!=NULL){
        //     return root;
        // }
        // if(lca1!=NULL){
        //     return lca1;
        // }else{
        //     return lca2;
        // }
        //for actual root node :=
        if(lca1==NULL){
        return lca2;
         }
        else if(lca2==NULL){
        return lca1;
          }
        else{// both left and right are not null,we found our result
        return root;
        } 
    }
};
int main(){
Node *root = new Node(10);
root->left = new Node(20);
root->right = new Node (30);
root->right->left = new Node(40);
root->right->right = new Node(50);
int ans = low
return 0;
}