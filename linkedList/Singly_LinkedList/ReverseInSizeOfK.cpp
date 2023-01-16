#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *insert(Node *head, int x)
{
    Node *newNode = new Node(x);
    if (head == NULL)
    {
        return newNode;
    }
    else
    {
        Node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = newNode;
        return head;
    }
}
Node *reverseInK(Node *head, int k)
{
    Node *current = head;
    Node *prev = NULL;
    Node *next = NULL;
    int count = 0;

    while (current != NULL && count < k)
    {
        // Store next
        next = current->next;

        // Reverse current node's pointer
        current->next = prev;

        // Move pointers one position ahead.
        prev = current;
        current = next;
        count++;
    }
    if (next!=NULL)
    {
          head->next = reverseInK(next,k);
      
    }

    return prev;
}

void printList(Node *head)
{

    if (head->next == NULL)
    {
        cout << head->data << "->NULL"
             << " ";
        return;
    }
    cout << head->data << "->"
         << "";
    printList(head->next);
}
int main()
{
    Node *head = NULL;
    int k = 3;
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 40);
    head = insert(head, 50);
    head = insert(head, 60);
    cout << "linked List" << endl;
    printList(head);
    cout << endl;
    head = reverseInK(head, k);
    cout << "Reverse linked List" << endl;
    printList(head);
    return 0;
}
