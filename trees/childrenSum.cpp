#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int k){
        data= k;
        left = right = NULL;
    }
};
int isCsum(Node* root){

        int sum = 0;
    if(root==NULL||(root->left==NULL&&root->right==NULL)){
        return 1;
    }
    else{
        if(root->left!=NULL){
        sum+=root->left->data;
    }
     if(root->right!=NULL){
        sum+=root->right->data;
    }
    return ((root->data==sum) && isCsum(root->left) && isCsum(root->right));
    }
}
   
int main(){
Node *root = new Node(30);
root->left = new Node(20);
root->right = new Node (10);
root->left->left = new Node(40);
root->left->right = new Node(50);
root->right->right = new Node (60);
root->right->right->right = new Node (70);
if( isCsum(root)){
    cout<<"yes it is csum";
}else{
    cout<<"fuck you!!";
}
return 0;
}