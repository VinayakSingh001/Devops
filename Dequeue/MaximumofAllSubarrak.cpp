#include<bits/stdc++.h>
using namespace std;
void printMax(int arr[],int n , int k){
deque<int>dq;
for (int i = 0; i < k; i++)
{
    /* code */
    while(!dq.empty()&&arr[i]>=arr[dq.back()])
        dq.pop_back();
        dq.push_back(i);
}
for (int i = k; i < n; i++)
{
    /* code */
    cout<<arr[dq.front()]<<" ";
    while(!dq.empty()&&dq.front()<=i-k){
        dq.pop_front();
    }
    while (!dq.empty()&&arr[i]>=arr[dq.back()])
        dq.pop_back();
    
  dq .push_back(i);  
        /* code */
}
    cout<<arr[dq.front()]<<" ";
}


int main(){



return 0;
}