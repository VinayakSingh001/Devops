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
int width(Node *root){
    if(root==NULL){
        return 0;
    }
    int maxx=0;
    queue<Node*>q;
    q.push(root);
    while(q.empty()==false){
        int n = q.size();
        maxx = max(n,maxx);
        while(n>0){
            Node *curr= q.front();
            q.pop();
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
            n--;
        }
    }
    return maxx;
}
int main(){
Node *root = new Node(10);
root->left = new Node(20);
root->right = new Node (30);
root->left->left = new Node(40);
root->left->right = new Node(50);
root->right->right = new Node (60);
root->right->right->right = new Node (70);
int ans = width(root);
cout<<ans<<endl;
return 0;
}
