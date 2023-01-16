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
Node *deleteAtPos(Node *head, int position){
     
  Node *curr = head;
   if(head == NULL){
       return NULL;
   }
   else if(position==0){
      
      head = curr->next;
      delete curr;
      return head;
       }
       else{
       
       for(int i = 0;i <position-1 && curr!=NULL;i++){
           curr = curr->next;
       }
         if(curr==NULL||curr->next==NULL){
             return head;
         }
       Node *next = curr->next->next;
       delete curr->next;
       curr->next =next;
       return head;
       }
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
    head = deleteAtPos(head,1);
    printList(head);                
    return 0;
}
