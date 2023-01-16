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
int height(Node* root){
     if(root == NULL){
        return 0;
    }else{
        return max(height(root->left),height(root->right))+1;
    }
}
bool isBalanced(Node* root){
    if(root==NULL){
        return true;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    
    return (abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right));
}
int BalancedTree(Node *root){
    if(root==NULL){
        return 0;
    }
    int lh = BalancedTree(root->left);
    if(lh==-1){
        return -1;
    }
    int rh = BalancedTree(root->right);
    if(rh==-1){
        return -1;
    }
    if(abs(lh-rh)>1) return -1;
    else{
       return max(lh,rh)+1;
    }
      
}
int main(){
Node *root = new Node(10);
root->left = new Node(20);
root->right = new Node (30);
root->left->left = new Node(40);
root->left->right = new Node(50);
root->right->right = new Node (60);
root->right->right->right = new Node (70);
if(isBalanced(root)){
    cout<<"Balanced"<<endl;
}else{
    cout<<"Not Balanced"<<endl;
}
if(BalancedTree(root)>=0){
    cout<<"Balanced Tree"<<endl;
}else{
    cout<<"Not balanced Tree"<<endl;
}
return 0;
}