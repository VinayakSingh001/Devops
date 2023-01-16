#include<bits/stdc++.h>
using namespace std;
int solve(int arr[], int n){
    int count = 0;
   for(int i = 0 ; i < n ; i++){
      bool flag = true;
      for(int j = 0 ; j < i ; j++){
        if(arr[j]>arr[i]){
            flag = false;
        }
      }
       for(int k = i+1 ; k < n ; k++){
        if(arr[k]<arr[i]){
            flag = false;
        }
      }
      if(flag == true){
        count++;
      }

   }
   return count;
}
int main(){
 int arr[5]= {1,2,3};
 int ans = solve(arr, 5);
 cout<<ans<<endl;

return 0;
}