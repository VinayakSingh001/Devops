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
bool detectLoop(Node *head){
    Node *temp = new Node();
    Node *curr = head;
    while(curr!=NULL){
        if(curr->next==NULL){
            return false;
        }
         if(curr->next==temp){
            return true;
        }
        Node *currNext = curr->next;
        curr->next = temp ;
        curr = curr->next;
    }
    return false;
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
    if(detectLoop(head)){
        cout<<"loop"<<endl;
    }else{
        cout<<"NOloop"<<endl;
    }
    // printList(head);                
    return 0;
}