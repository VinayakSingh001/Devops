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
Node *reverseLi(Node *head){
//          Node *newHead = NULL;
//          while(head != NULL){
//              Node *next = head->next;
//              head->next = newHead;
//              newHead = head;
//              head = next;
//          }
         
//    return newHead;
      Node* current = head;
        Node *prev = NULL;
  
        while (current != NULL) {
            // Store next
           Node *next = current->next;
  
            // Reverse current node's pointer
            current->next = prev;
  
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
      
        return prev;
    }

void printList(Node* head)
{
    
        if(head->next==NULL){
            cout<<head->data<<"->NULL"<<" ";
            return;
        }
        cout << head->data <<"->"<<"";
      printList(head->next);   
  
  
        //  Node* temp = head;
        // while (temp != NULL) {
        //     cout << temp->data << " ";
        //     temp = temp->next;
        // }
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
   head =  reverseLi(head);
   cout<<"Reverse linked List"<<endl;
    printList(head);                
    return 0;
}
