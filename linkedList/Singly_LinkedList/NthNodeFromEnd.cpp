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
void NthNodeFromEnd(Node *head , int n){
      int count = 0;
      Node *curr = head;
     for(curr= head;curr!=NULL;curr=curr->next){
         count++;
     }
    
      if (count<n){
          cout<<"No data";
      }else{

             Node *temp = head;

      for ( int i = 1; i < count-n+1; i++)
      {
          /* code */
          temp=temp->next;
      }
      cout<<temp->data;

      }
     
}
// void printList(Node* head)
// {
    
//         if(head->next==NULL){
//             cout<<head->data<<"->NULL"<<" ";
//             return;
//         }
//         cout << head->data <<"->"<<"";
//       printList(head->next);   
// }
int main()
{   
    Node *head = NULL;
    head = insert(head,10);
    head = insert(head,20);    
    head = insert(head,30);
    head = insert(head,40);
    head = insert(head,50);
    // printList(head);    
    NthNodeFromEnd(head,5);         
    return 0;
}
