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

//method 1;
void leveOrderTraversalByLine(Node *root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        Node* curr = q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            q.push(NULL);
            continue;
        }
        cout<<curr->key<<" ";
        if(curr->left!=NULL) q.push(curr->left);
        if(curr->right!=NULL) q.push(curr->right);
    }
    
}
//method 2
void printLevelOrder(Node *root)
{
    // Base Case
    if (root == NULL) return;
 
    // Create an empty queue for level order traversal
    queue<Node *> q;
 
    // Enqueue Root and initialize height
    q.push(root);
 
    while (q.empty() == false)
    {
        // nodeCount (queue size) indicates number
        // of nodes at current level.
        int nodeCount = q.size();
 
        // Dequeue all nodes of current level and
        // Enqueue all nodes of next level
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
root->left->right = new Node(50);
root->left->left = new Node(40);
root->right->right = new Node (60);
root->right->right->right = new Node (70);
printLevelOrder(root);
return 0;
}