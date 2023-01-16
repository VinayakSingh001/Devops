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
void printNode(Node *root, int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<(root->key)<<" ";
    }
    else{
        printNode(root->left , k-1);
        printNode(root->right , k-1);
    }
}
int main(){
Node *root = new Node(10);
root->left = new Node(20);
root->right = new Node (30);
root->left->right = new Node(40);
root->left->left = new Node(50);
root->right->right = new Node (60);
root->right->right->right = new Node (70);

printNode(root , 1);
return 0;
}