#include    <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int great = INT_MIN ;
    int count = 0;
    int arr[n];
     for(int i = 0 ; i < n ; i++){
         cin>>arr[i];
     }
   for(int i = 0 ; i < n ; i++){
       if(arr[i]>=great){
           great = arr[i];
       }
   }
   for(int i = 0 ; i < n ; i++){
       if(arr[i]==great){
           count++;
       }
   }
   cout<<count<<endl;
}