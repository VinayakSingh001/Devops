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
//iterative solution
//  int search(Node *head , int x){
//     Node *curr = head;
//     int pos = -1;
//     while(curr!=NULL){
//         if(curr->data==x){
//            return pos;
//         }else
//         pos++;
//         curr=curr->next;
//     }
//     return -1;
// }
//recursive solution
 int search(Node *head ,int x){
    if(head==NULL)
    return -1;
    else if(head->data==x)
    return 1;
    else {
    int res = search(head->next, x);
    if(res==-1)
    return -1;
    else return res+1;
    }

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
    if (head == NULL)
        return;
        cout << head->data <<" ";
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
    int ans = search(head,30);
    cout<<ans<<endl;
    
    return 0;
}
