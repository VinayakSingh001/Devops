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
bool isPalindrome(Node* head) {
        vector<int>v;
        Node* curr = head;
        while(curr!=NULL){
            v.push_back(curr->data);
            curr=curr->next;
        }
        int n = v.size();
         bool ch = true;
        int low = 0, high = n-1;
        while(low<high){
            if(v[low]!=v[high]){
                return false;
            }
            low++;
            high--;
        }
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
    // head = insert(head,40);
    // head = insert(head,50);
    // printList(head);   
    if(isPalindrome(head)){
        cout<<"true";
    }else{
        cout<<"false";
    }             
    return 0;
}
