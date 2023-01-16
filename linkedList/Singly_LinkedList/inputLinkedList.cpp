#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node (int x){
        data = x;
        next = NULL;
    }
    
};
Node* takeLlInput()
{
    Node* head = NULL;
    Node* tail = NULL;
    int data;
    cout<<"Enter data"<<endl;
    cin >> data;
    while (data != -1)
    {
        Node* newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cout<<"Enter data"<<endl;
        cin >> data;
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
    Node* head = takeLlInput();
    printList(head);
    return 0;
}
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *next;
// };

// int main(){
//     struct node *head , *newnode , *temp;
//     head = NULL;
//     int choice=1;
//     while(choice){
//         newnode=(struct node *)malloc(sizeof(struct node));
//         printf("Enter Data: ");
//         scanf("%d",&newnode->data);
//         newnode->next = 0;
//         if(head==NULL){
//             head = temp = newnode;
//         }
//         else{
//             temp->next = newnode;
//             temp = newnode;
//         }
//         printf("Do u want to continue(0,1) : ");
//         scanf("%d",&choice);
//     }

//     temp = head;
//     while(temp!= NULL){
//         printf("%d | %p    ",temp->data,temp->next);
//         temp = temp->next;
//     }
   
//     return 0;
// }