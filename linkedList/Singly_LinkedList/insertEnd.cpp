#include <iostream>
#include <bits/stdc++.h>
#define N0WinMain
using namespace std;
struct Node{
    int data;
    Node* next;
    Node (int x){
    data = x;
    next = NULL;
    }
};
// Node *insertBegin(Node *head, int x){

//    Node *temp = new Node(x);
//    temp->next = head;
//    return temp;

// }
 Node *insertAtEnd(Node *head, int x){
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
void print(Node* head)
{
    if (head == NULL)
        return;
        cout << head->data <<" ";
      print(head->next);
    
}

int main()
{
    Node *head = NULL;
    // head = insertBegin(head, 89);
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    print(head);

    return 0;
}

