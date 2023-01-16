#include<bits/stdc++.h>
using namespace std;
struct stack{
    queue<int>q1 , q2;
    int top(){
        return q1.front();
    }
    int size(){
        return q1.size();
    }
    int pop(){
        return q1.front();
    }
    void push(int x){
        while(q1.empty()==false){
            q2.push(q1.top());
            q1.pop();
        }
        q1.push(x);
        while(q2.empty()==false){
            q1.push(q2.top());
            q2.pop();
        }
    }
}
int main(){


return 0;
}