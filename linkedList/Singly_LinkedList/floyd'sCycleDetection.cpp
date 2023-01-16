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
int isLoop(Node *head){
   Node *slow = head;
   Node *fast = head;
   while( fast!=NULL&&fast->next!=NULL){
       slow = slow->next;
       fast = fast->next->next;
       if(slow==fast){
           return 1;
       }
    }
    
//     return false;
    //  Node *slow_p = list, *fast_p = list;
 
    // // Iterate and find if loop exists or not
    // while (slow_p && fast_p && fast_p->next) {
    //     slow_p = slow_p->next;
    //     fast_p = fast_p->next->next;
 
    //     /* If slow_p and fast_p meet at some point then there
    //        is a loop */
    //     if (slow_p == fast_p) {
    //         // removeLoop(slow_p, list);
 
    //         /* Return 1 to indicate that loop is found */
    //         return 1;
    //     }
    // }
 
    /* Return 0 to indicate that there is no loop*/
    return 0;
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
//    Node *head = NULL;
//     head = insert(head,10);
//     head = insert(head,20);    
//     head = insert(head,30);
//     head = insert(head,40);
//     head = insert(head,50);
    
    Node* head = new Node(50);
    head->next = new Node(20);
    head->next->next = new Node(15);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(10);
 
    /* Create a loop for testing */
    head->next->next->next->next->next = head->next->next;
   
    //printList(head);  
    int ans  = isLoop(head);
    if(ans==1){
        cout<<"yes";
    }else{
        cout<<"NO";
    }        
    return 0;
}
