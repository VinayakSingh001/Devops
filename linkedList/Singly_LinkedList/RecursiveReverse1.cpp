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
 Node *insert(Node *head, int x){
       Node *newNode = new Node(x);
       if(head == NULL){
           return newNode;
       }
       else{
        Node *curr = head;
       while(curr->next != NULL){
         curr = curr->next;
       }
          curr->next=newNode ;
            return head;       
    }
}
Node *reverseLinkedList(Node *head){
  if(head==NULL||head->next==NULL){
      return head;
  }
 Node *rest_head = reverseLinkedList(head->next);
 Node *rest_tail = head->next;
 rest_tail->next = head;
head-> next = NULL;
return rest_head;

    
}
void printList(Node* head)
{
    
        if(head->next==NULL){
            cout<<head->data<<"->NULL"<<" ";
            return;
        }
        cout << head->data <<"->"<<"";
      printList(head->next);   
}
int main()
{   
    Node *head = NULL;
    head = insert(head,10);
    head = insert(head,20);    
    head = insert(head,30);
    head = insert(head,40);
    head = insert(head,50);
     cout<<"linked List"<<endl;
        printList(head);
        cout<<endl;
   head =  reverseLinkedList(head);
   cout<<"Reverse linked List"<<endl;
    printList(head);                              
    return 0;
}
