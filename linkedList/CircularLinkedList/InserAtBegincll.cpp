#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node (int x){
        data = x;
        next = NULL;
    }
    
};
Node *insertAtBegin(Node *head , int x){
    Node *newNode = new Node (x);
    Node *curr = head;
    if(head==NULL){
        newNode->next= newNode;
        return newNode;
    }else
    while(curr->next!= head){
        curr= curr->next;
    }
     curr->next = newNode;
     newNode->next = head;
     return newNode;
}

void printList(Node* head)
{
    Node* temp = head;
 
    // If linked list is not empty
    if (head != NULL) {
 
        // Print nodes till we reach first node again
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    }
}
int main()
{   
    Node *head = NULL;
    head = insertAtBegin(head,10);
    head = insertAtBegin(head,20);
    head = insertAtBegin(head,30);
    head = insertAtBegin(head,40);
    head = insertAtBegin(head,50);
    head = insertAtBegin(head,60);
    head = kthNodedelete(head,4);
    printList(head);                
    return 0;
}
