#include<bits/stdc++.h>
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
Node *insertAtEnd(Node *head,int x){
   Node *newNode = new Node(x);
   if(head==NULL){
       return newNode;
   }else{
       Node *curr = head;
       while(curr->next!=NULL){
           curr=curr->next;
       }
       curr->next = newNode;
       newNode->prev = curr;
   }

    return head;
}
void printList(Node* head)
{
     if(head->next==NULL){
            cout<<head->data<<"<=>NULL"<<" ";
            return;
        }
        cout << head->data <<"<=>"<<"";
      printList(head->next);   
}

int main()
{
    Node *head = NULL;
    head = insertAtEnd(head,10);
    head = insertAtEnd(head,20);
    head = insertAtEnd(head,30);
    head = insertAtEnd(head,40);
    head = insertAtEnd(head,50);
    printList(head);    
    return 0;
}