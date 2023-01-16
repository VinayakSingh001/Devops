#include<bits/stdc++.h>
using namespace std;
void nextGreater(int arr[],int n)
{
  stack<int>s;
  vector<int>v;
  s.push(arr[n-1]);
  v.push_back(-1);
  for(int i = n-2 ; i >= 0 ; i--){
      while(s.empty()==false&&s.top()<=arr[i]){
          s.pop();
      }
      int ng = s.empty() ? -1 : s.top();
      v.push_back(ng);
      s.push(arr[i]);
  }
  reverse(v.begin(),v.end());
  for(int i = 0 ; i < v.size();i++){
      cout<<v[i]<<" ";
  }
}
int main(){
int arr[4]={1,3,2,4};
nextGreater(arr,4);

return 0;
}