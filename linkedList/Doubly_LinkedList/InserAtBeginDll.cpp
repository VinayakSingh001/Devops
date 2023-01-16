#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node (int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
    
};
Node *insertAtBegin(Node *head , int x){
     Node *newNode = new Node(x);
     if(head==NULL){
         return newNode;
     }else{
         newNode->next = head;
         head->prev = newNode;
     }
     return newNode;



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
    head = insertAtBegin(head,10);
    head = insertAtBegin(head,20);
    head = insertAtBegin(head,30);
    printList(head);    
    return 0;
}