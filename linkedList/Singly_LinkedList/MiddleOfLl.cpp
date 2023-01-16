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
void printMiddle(Node *head){
     if(head==NULL){
         return;
     }
   Node *slow = head;
   Node *fast = head;
   while(fast!=NULL&&fast->next!=NULL){
       slow = slow->next ;
       fast = fast->next->next;
   }
  cout<<(slow->data);

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
    printList(head);
    printMiddle(head);                
    return 0;
}
