#include <bits/stdc++.h>
using namespace std;
void previousGreater(int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);
    cout<<-1<<" ";
    for (int i = 1; i < n; i++){
      while(s.empty()==false&&s.top()<=arr[i]){
          s.pop();
      }
      int pg = s.empty()?-1:s.top();
      cout<<pg<<" ";
      s.push(arr[i]);
    }
    
      
}
int main()
{
    int arr[5] = {20, 30, 10, 5, 15 };
    previousGreater(arr, 5);
    return 0;
}