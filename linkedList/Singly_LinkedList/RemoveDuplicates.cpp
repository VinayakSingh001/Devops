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
Node *removeDuplicates(Node *head){
   
       Node *curr = head;
       while(curr!=NULL&&curr->next!=NULL){
          if(curr->data==curr->next->data){
             Node *temp = curr->next;
              curr->next=curr->next->next;
              delete temp;
          }else
                curr=curr->next; 
        }
       return head;
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
    head = insert(head,20);
    head = insert(head,20);
    head = insert(head,40);
    head = insert(head,40);
    head = insert(head,40);
    head = removeDuplicates(head);
    printList(head);                
    return 0;
}
