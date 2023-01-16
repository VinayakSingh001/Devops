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
Node *insertAtPos(Node *head, int x , int Pos){
    
   Node *newNode = new Node(x);
   if(Pos==1){
       newNode->next = head;
       return newNode;
   }else{
      Node *curr = head;
     for(int i = 0 ; i < Pos-2&&curr!=NULL;i++){
         curr = curr->next;
     } 
       if(curr==NULL)
       return head;
       newNode->next = curr->next;
       curr->next = newNode;
       return head;
   }

}
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
void printList(Node* head)
{
    if (head == NULL)
        return;
        cout << head->data <<" ";
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
    head = insertAtPos(head,11,2);
    head = insertAtPos(head,0,1);
    head = insertAtPos(head,60,8);
    head = insertAtPos(head,90,9);
    head = insertAtPos(head,91,11);
    printList(head);
    
    return 0;
} 