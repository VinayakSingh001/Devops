//Array Implementation
//Can use vector also


#include<bits/stdc++.h>
using namespace std;
struct createStack
{
    int *arr;
    int cap;
    int top;
    createStack(int c){
        cap = c;
        arr = new int[cap];
        top = -1;
    }
void push(int x){
    top ++;
    arr[top] = x;
}
int pop(){
    int res = arr[top];
    top--;
    return res;
}
int peek(){
    return arr[top];
}
int size(){
    return top+1;
}
bool isEmpty(){
    return (top==-1);
}
};
int main(){
createStack s(5);
s.push(1);
s.push(2);
s.push(3);
cout<<s.pop()<<endl;
cout<<s.size()<<endl;
cout<<s.isEmpty()<<endl;
cout<<s.peek()<<endl;
return 0;
}