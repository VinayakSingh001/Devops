#include<bits/stdc++.h>
using namespace std;
struct Node{
 int data;
 Node *next;
 Node(int x){

     data = x;
     next = NULL;
 }
};
Node *insertBegin(Node *head , int x){

   Node *temp = new Node(x);
   temp->next = head;
   return temp;

}
 void printlist(Node *head)
{
    if (head == NULL)
        return;
    cout << head->data << " ";
    printlist(head->next);
}
int main(){
Node *head = NULL;
head = insertBegin(head , 10);
head = insertBegin(head , 20);
head = insertBegin(head , 30);
head = insertBegin(head , 40);
printlist(head);
return 0;
}
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define mod 1000000007
// struct Node
// {
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         data = x;
//         next = NULL;
//     }
// };
// Node *insertbegin(Node *head, int x)
// {
//     Node *temp = new Node(x);
//     temp->next = head;
//     return temp;
// }
// Node *insertend(Node *head, int x)
// {
//     Node *temp = new Node(x);
//     if (head == NULL)
//         return temp;
//     Node *current = head;
//     while (current->next != NULL)
//     {
//         current = current->next;
//     }
//     current->next = temp;
//     return head;
// }
// // Node *delhead(Node *head)
// // {
// //     if (head == NULL)
// //         return NULL;
// //     else
// //     {
// //         Node *Current = head->next;
// //         delete head;
// //         return Current;
// //     }
// // }
// // Node *deltail(Node *head)
// // {
// //     if (head == NULL)
// //     {
// //         return NULL;
// //     }
// //     else
// //     {
// //         Node *current = head;
// //         while (current->next == NULL)
// //         {
// //             current = current->next;
// //         }
// //         delete current;
// //         return head;
// //     }
// // }
// void printlist(Node *head)
// {
//     if (head == NULL)
//         return;
//     cout << head->data << " ";
//     printlist(head->next);
// }
// int main()
// {
//     Node *head = NULL;
//     head = insertbegin(head, 30);
//     head = insertbegin(head, 40);
//     head = insertend(head, 99);
//     head = insertend(head, 44);
//     head = insertbegin(head, 10);
//     printlist(head);
//     return 0;
// }
