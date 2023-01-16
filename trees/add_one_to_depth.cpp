// Add One Row to Tree
// Given the root of a binary tree and two integers val and depth,
// add a row of nodes with value val at the given depth depth.
// Note that the root node is at depth 1.
// The adding rule is:
// Given the integer depth, for each not null tree node cur at the depth depth - 1,
// create two tree nodes with value val as cur's left subtree root and right subtree root.
// cur's original left subtree should be the left subtree of the new left subtree root.
// cur's original right subtree should be the right subtree of the new right subtree root.
// If depth == 1 that means there is no depth depth - 1 at all, then create a tree node with
// value val as the new root of the whole original tree, and the 
// original tree is the new root's left subtree.
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
 void solvee(Node* root, int val, int depth,int currDepth){
    if(root==NULL){
        return;
    }
    if(currDepth==depth-1){
        Node* temp = root->left;
        Node* newRoot = new Node(val);
        root->left = newRoot;
        newRoot->left = temp;
        temp = root->right;
        root->right = new Node(val);
        root->right->right = temp;
    }
    solvee(root->left,val,depth,currDepth+1);
    solvee(root->right,val,depth,currDepth+1);
    
}
Node* solve(Node* root, int val, int depth) {
        if(depth==1){
            Node* temp = new Node(val);
            temp->left=root;
            return temp;
        }
        solvee(root,val,depth,1);
        return root;
    }
void printLevelOrder(Node *root)
{
    if (root == NULL) return;
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        int nodeCount = q.size();
        while (nodeCount > 0)
        {
            Node *node = q.front();
            cout << node->key << " ";
            q.pop();
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
            nodeCount--;
        }
        cout << endl;
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
Node *ans = solve(root,1,3);
 printLevelOrder(ans);
return 0;
}