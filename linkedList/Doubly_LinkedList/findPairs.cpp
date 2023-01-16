#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data ;
    Node *prev;
    Node *next;
    Node (int x){
        data = x;
        prev = NULL;
        next = NULL;
    }

};
Node *insertAtEnd(Node *head,int x){
   Node *newNode = new Node(x);
   if(head==NULL){
       return newNode;
   }else{
       Node *curr = head;
       while(curr->next!=NULL){
           curr=curr->next;
       }
       curr->next = newNode;
       newNode->prev = curr;
   }

    return head;
}
vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        vector<pair<int, int>>ans;
        Node *high = head;
        while(high->next!=NULL){
            high = high -> next;
            
        }
        Node* low = head;
        while(low->data<=high->data){
            if(low->data+high->data==target){
                ans.push_back(make_pair(low->data,high->data));
                low = low->next;
                high = high->prev;
            }
            else if(low->data+high->data>target){
                high = high->prev;
            }else{
                low = low->next;
            }
        }
        return ans;
    }
void printList(Node* head)
{
     if(head->next==NULL){
            cout<<head->data<<"<=>NULL"<<" ";
            return;
        }
        cout << head->data <<"<=>"<<"";
      printList(head->next);   
}

int main()
{
    Node *head = NULL;
    head = insertAtEnd(head,3);
    head = insertAtEnd(head,4);
    head = insertAtEnd(head,5);
    head = insertAtEnd(head,6);
    head = insertAtEnd(head,7);
    head = insertAtEnd(head,9);
    head = insertAtEnd(head,12);
    head = insertAtEnd(head,15);
    head = insertAtEnd(head,16);
    head = insertAtEnd(head,18);
    head = insertAtEnd(head,19);
    head = insertAtEnd(head,20);
    head = insertAtEnd(head,21);
    head = insertAtEnd(head,22);
    head = insertAtEnd(head,24);
    head = insertAtEnd(head,25);
    head = insertAtEnd(head,28);
    head = insertAtEnd(head,31);
    head = insertAtEnd(head,32);
    head = insertAtEnd(head,33);
    head = insertAtEnd(head,34);
    head = insertAtEnd(head,38);
    head = insertAtEnd(head,41);
    head = insertAtEnd(head,42);
    head = insertAtEnd(head,44);
    head = insertAtEnd(head,47);
    head = insertAtEnd(head,48);
    head = insertAtEnd(head,49);
    // head = insertAtEnd(head,40);
    // head = insertAtEnd(head,50);
    vector<pair<int,int>>ans=findPairsWithGivenSum(head,50);
    for(int i = 0; i < ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    printList(head);    
    return 0;
}