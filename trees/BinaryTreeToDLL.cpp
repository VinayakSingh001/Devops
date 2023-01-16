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
Node *prev =NULL;
Node* BtToDll(Node* root){
    if(root==NULL){
        return root;
    }
    Node* head = BtToDll(root->left);
    if(prev==NULL){
        head=root;
    }else{
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    BtToDll(root->right);
    return head;
}
int main(){
Node *root = new Node(10);
root->left = new Node(20);
root->right = new Node (30);
root->left->left = new Node(40);
root->left->right = new Node(50);
root->right->right = new Node (60);
root->right->right->right = new Node (70);
return 0;
}