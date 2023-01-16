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
// void segregateEvenOdd(Node *head){
//    Node *Es = NULL;
//    Node *Ee = NULL ;
//    Node *Os = NULL ;
//    Node *Oe = NULL;
//    Node *curr = head;
//    while (curr!=NULL )
//    {
//        /* code */
//        int x = curr->data;
//        if(x%2==0){
//            if(Es==NULL){
//                Es = curr;
//                Ee = Es;
//            }else{
//                Ee->next = curr;
//                Ee = Ee->next;
//            }
//        }else{
//            if(Os==NULL){
//                Os = curr;
//                Oe = Es;
//            }else{
//                Oe->next = curr;
//                Oe = Oe->next;
//            }
//         }
//         curr= curr->next;
//    }
//    if(Os==NULL||Es==NULL){
//        return;
//    }
  
//       Ee -> next = Os;
//       Oe->next = NULL;
//       head = Es;

 
// }
void segregateEvenOdd( Node **head_ref)
{
    // Starting node of list having
    // even values.
    Node *evenStart = NULL;
     
    // Ending node of even values list.
    Node *evenEnd = NULL;
     
    // Starting node of odd values list.
    Node *oddStart = NULL;
     
    // Ending node of odd values list.
    Node *oddEnd = NULL;
     
    // Node to traverse the list.
    Node *currNode = *head_ref;
     
    while(currNode != NULL){
        int val = currNode -> data;
         
        // If current value is even, add
        // it to even values list.
        if(val % 2 == 0) {
            if(evenStart == NULL){
                evenStart = currNode;
                evenEnd = evenStart;
            }
             
            else{
                evenEnd -> next = currNode;
                evenEnd = evenEnd -> next;
            }
        }
         
        // If current value is odd, add
        // it to odd values list.
        else{
            if(oddStart == NULL){
                oddStart = currNode;
                oddEnd = oddStart;
            }
            else{
                oddEnd -> next = currNode;
                oddEnd = oddEnd -> next;
            }
        }
                     
        // Move head pointer one step in
        // forward direction
        currNode = currNode -> next;   
    }
     
    // If either odd list or even list is empty,
    // no change is required as all elements
    // are either even or odd.
    if(oddStart == NULL || evenStart == NULL){
        return;
    }
     
    // Add odd list after even list.    
    evenEnd -> next = oddStart;
    oddEnd -> next = NULL;
     
    // Modify head pointer to
    // starting of even list.
    *head_ref = evenStart;
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
    head = insert(head,60);
    head = insert(head,70);
    segregateEvenOdd(&head);
    printList(head);                
    return 0;
}
