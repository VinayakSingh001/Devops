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
Node *mergeList(Node *a, Node *b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    Node *head = NULL;
    Node *tail = NULL;
    if(a->data <= b->data){
        head = tail = a ;
        a = a->next;
    }else{
        head =  tail = b;
        b = b->next;
    }
    while(a!=NULL && b!=NULL){
        if(a->data<=b->data){
            tail->next = a;
            tail = a;
            a = a->next;
        }else{
            tail->next = b;
            tail = b;
            b =b->next;
        }
    }
    if(a==NULL){
        tail->next = b;
    }else{
        tail->next = a;
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
    Node *head1 = NULL;
    head1 = insert(head1,10);
    head1 = insert(head1,20);    
    head1 = insert(head1,30);
    head1 = insert(head1,40);
    head1 = insert(head1,50);
     Node *head2 = NULL;
    head2 = insert(head2,1);
    head2 = insert(head2,2);    
    head2 = insert(head2,3);
    head2 = insert(head2,4);
    head2 = insert(head2,5);
    Node *head = mergeList(head1 , head2);
    printList(head);                
    return 0;
}
