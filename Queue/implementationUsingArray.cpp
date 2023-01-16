#include<bits/stdc++.h>
using namespace std;
struct Queue{
    int size, cap , front;
    int arr*;
    Queue(int c){
        cap = c;
        front = 0;
        size = 0;
        arr = new int[cap];
    }
bool isfull(){
    return (size==cap);
}
bool isempty(){
    return (size==0);
}
void enque(int x){
    if(isfull())
    return;
    // arr[size] = x;
    // size++; if front not maintained
    int rear = getRear();
    rear = (rear+1)%cap;
    arr[rear] = x;
    size++;
}
void deque(){
    if(isempty())
    return;
    // for (int i = 0; i < size-1; i++)
    // {
    //     /* code */
    //     arr[i]=arr[i+1];
    // }
    front = (front+1)%cap;
    size--;
}
int getFront(){
    if(isempty()){
        return -1;
    }else {
        return front;
        //return arr[0]; if front not maintained in struct
    }
}
int getRear(){
    if(isempty()){
        return -1;
    }else{
        //return arr[size-1] if front not maintained;
        return (front+size-1)%cap;
    }
}
}
int main(){


return 0;
}