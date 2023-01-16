// Given the root of a binary tree and an integer targetSum,

//  return true if the tree has a root-to-leaf path such that adding up all the
//   values along the path equals targetSum.

// A leaf is a node with no children.
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};
bool hasPathSum(Node *root,int targetSum){
    // if(root==NULL){
    //     return 0;
    // }
    // int sumL+= pathsum(root->left,target);
    // int sumR+= pathsum(root->right,target);
    // return ((sumL==target)||(sumR==target));
    if(root == NULL)
            return false;
        if(root->left == NULL && root->right == NULL && root->key == targetSum)
            return true;
        return hasPathSum(root->left, targetSum - root->key) || hasPathSum(root->right, targetSum - root->key);
}
int main(){
Node *root = new Node(10);
root->left = new Node(20);
root->right = new Node (30);
root->left->left = new Node(40);
root->left->right = new Node(50);
root->right->right = new Node (60);
root->right->right->right = new Node (70);
if(hasPathSum(root,1000)){
    cout<<"yes"<<endl;
}else{
    cout<<"no"<<endl;
}
return 0;
}