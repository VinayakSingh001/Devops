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
//recursive
int maxlevel=0;
void printLeft(Node* root,int level){
  if(root==NULL){
    return;
  }
  if(maxlevel<level){
    cout<<root->key<<" ";
    maxlevel = level;
  }
  printLeft(root->left,level+1);
  printLeft(root->right,level+1);
}
void printLeftView(Node *root){
    printLeft(root,1);
}
//iterative
void printTheLeftView(Node *root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(q.empty()==false){
        int size = q.size();
        int maxsize = size;
        while(size>0){
            Node*curr = q.front();
            q.pop();
            if(size==maxsize){
                cout<<curr->key<<" ";
            }
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
            size--;
        }
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
printLeftView(root);
cout<<endl;
printTheLeftView(root);
return 0;
}