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
Node *deleteLast(Node *head){

   
     if(head==NULL){
         return NULL;
     }
     else if(head->next==NULL){
         delete head;
         return NULL;
     }
     else{
         Node *curr = head;
         while(curr->next->next!=NULL){
             curr=curr->next;
         }
           delete curr->next;
           curr->next = NULL; 
           return head;
     }

}
Node *insertFirst(Node *head , int data){
      Node *newNode = new Node(data);
      if(head==NULL){
          return newNode;
      } 
      else{
          Node *curr = head;
          while(curr->next!=NULL){
              curr = curr->next;
          }
             curr->next = newNode;
             return head;
      }
 }
void printList(Node *head){
    if(head==NULL){
        return;
    }else{
        cout<<head->data<<" ";
        printList(head->next);
    }
}
int main()
{ 
    Node *head = NULL;
    head = insertFirst(head,10);
    head = insertFirst(head,20);
    head = insertFirst(head,30);
    head = insertFirst(head,40);
    head = insertFirst(head,50);
    head = deleteLast(head);
    head = deleteLast(head);
    printList(head);
    return 0;
}