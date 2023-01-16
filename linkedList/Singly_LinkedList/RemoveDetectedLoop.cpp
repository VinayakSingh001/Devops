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
void removeDetectedLoop(Node *head){

     Node *slow = head;
     Node *fast = head;
     while( fast!=NULL&&fast->next!=NULL){
       slow = slow->next;
       fast = fast->next->next;
       if(slow==fast){
           break;
       }
    }
    if(slow!=fast){
        return;
    }
    slow = head;
    while(slow->next!=fast->next){
        slow = slow -> next;
        fast = fast -> next;
    }
    fast->next = NULL;
    return;
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
    // Node *head = NULL;
    // head = insert(head,10);
    // head = insert(head,20);    
    // head = insert(head,30);
    // head = insert(head,40);
    // head = insert(head,50);
    Node* head = new Node(50);
    head->next = new Node(20);
    head->next->next = new Node(15);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(10);
 
    /* Create a loop for testing */
    head->next->next->next->next->next = head->next->next;
    removeDetectedLoop(head);
    printList(head);                
    return 0;
}
