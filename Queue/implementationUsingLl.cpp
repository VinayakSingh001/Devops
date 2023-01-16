#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node (int x){
        data = x;
        next = NULL;
    }
}
struct Queue{
    Node *front , *rear;
    int size;
    Queue(){
        front = NULL;
        rear  = NULL;
        size = 0;
    }
    void enque(int x){
        Node *temp = new Node(x);
        if(front == NULL){
            front = rear = temp;
            return;
        }else{
            rear->next = temp;
            rear = temp;
        }
        size++;
    }
    void dequeue(){
        if(front==NULL){
            return;
        }
        Node *temp = front;
        front = front->next;
        if(front==NULL){
            rear = NULL;
        }
        delete(temp);
        size--;
    }
}
int main(){



return 0;
}