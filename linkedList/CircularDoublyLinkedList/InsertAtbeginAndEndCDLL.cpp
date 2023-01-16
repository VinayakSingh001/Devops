#include<bits/stdc++.h>
#define NoWinMain
using namespace std;
class Node{
    public:
    int data ;
    Node *prev;
    Node *next;
    Node (int x){
        data = x;
        prev = NULL;
        next = NULL;
    }

};
Node *insertAtbegin(Node *head , int x){
      Node *newNode  =  new Node(x);
      if(head==NULL){
          newNode->next = newNode;
          newNode-> prev = newNode;
          return newNode;
      }
      else {
        //   Node *curr = head;
        //   while(curr->next!=head){
        //       curr = curr->next;
        //   }
        //   curr->next= newNode;
        //   newNode->next = head;
        //   head->prev = newNode;
        //   newNode->prev = curr;
        //   return head;
        newNode -> prev = head->prev;
        newNode ->next = head;
        head->prev->next = newNode;
        head->prev= newNode ;
        return newNode;
      }
}
Node *insertAtEnd(Node *head , int x){
      Node *newNode  =  new Node(x);
      if(head==NULL){
          newNode->next = newNode;
          newNode-> prev = newNode;
          return newNode;
      }
      else {
        //   Node *curr = head;
        //   while(curr->next!=head){
        //       curr = curr->next;
        //   }
        //   curr->next= newNode;
        //   newNode->next = head;
        //   head->prev = newNode;
        //   newNode->prev = curr;
        //   return head;
        newNode -> prev = head->prev;
        newNode ->next = head;
        head->prev->next = newNode;
        head->prev= newNode ;
        return head;
      }
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
    head = insertAtEnd(head,30);
    head = insertAtEnd(head,40);
    head = insertAtEnd(head,50);
    head = insertAtbegin(head,20);
    head = insertAtbegin(head,10);
    head = insertAtbegin(head,0);
    // head = deletehead(head);
    printList(head);    
    return 0;
}