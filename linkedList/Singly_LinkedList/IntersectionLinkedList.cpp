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
void IntersectionNode(Node *head1 , Node *head2){
    Node *curr1 = head1;
    Node *curr2 = head2;
    int count1 = 0;
    int count2 = 0;
    for(curr1 = head1 ; curr1!=NULL ; curr1=curr1->next){
        count1++;
    }
    for(curr2 = head2 ; curr2!=NULL ; curr2=curr2->next){
        count2++;
    }
    int diff = abs(count1-count2);
    cout<<diff<<endl;
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
    head1 = insert(head1,60);
    Node *head2 = NULL;
    head2 = insert(head2,1);
    head2 = insert(head2,2);    
    head2 = insert(head2,30);
    head2 = insert(head2,40);
    // head2 = insert(head2,50);
    IntersectionNode(head1,head2);
    // printList(head);                
    return 0;
}
