#include<bits/stdc++.h>
using namespace std;
void reverse(queue<int>&q){
    //iterative
    stack<int>s;
    while(q.empty()==false){
        s.push(q.front());
        q.pop();
    }
    while(s.empty()==false){
        q.push(s.top());
        s.pop();
    }
    //recursive
    if(q.empty()){
        return;
    }
    int x = q.front();
    reverse(q);
    q.push(x);
}
int main(){
 

return 0;
}