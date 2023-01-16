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
Node *insertAtEnd(Node *head , int x){
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
     return head;
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
    head = insertAtEnd(head,10);
    head = insertAtEnd(head,20);
    head = insertAtEnd(head,30);
    head = insertAtEnd(head,40);
    head = insertAtEnd(head,50);
    head = insertAtEnd(head,60);
    printList(head);                
    return 0;
}