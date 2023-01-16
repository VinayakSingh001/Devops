/*Minimize the maximum no. of pages for a student ...
constraints..
1-> contiguous allotment;
2-> each student has one book
3-> no partition of books 
VERY IMPORTANT QUESTION
*/
// #include<bits/stdc++.h>
// using namespace std;
// bool isPossible(int arr[] , int n , int k , int mid){
//   int studentRequired=1;
//   int sum = 0;
//   for(int i = 0 ;i < n ; i++){
//       if(arr[i]>mid)
//       {
//          return false;
//       }
//       if(arr[i]+sum > mid){
//           studentRequired++;
//           sum = arr[i];
//           if (studentRequired > k)
//                 return false;
//       }
//       else{
//           sum+=arr[i];
//       }
//   }
//   return true;

// }
// int allotPages(int arr[],int n,int k){
//     int low = arr[0];
//     int sum = 0;
//     for(int i = 0; i < n ; i++){
//         sum+=arr[i];
//     }
//     int high = sum;
//     int res = -1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(isPossible(arr,n,k,mid)){
//             res = mid;
//             high = mid-1;
//         }
//         else 
//             low = mid+1;
//     }
//     return res;
// }
// int main(){
//     int arr[4]={12,34,67,90};
//     int array[5]={10,20,10,30};
//     cout<<allotPages(arr,4,2)<<endl;
//     cout<<allotPages(array,4,3 )<<endl;
// }
#include <iostream>
using namespace std;
 
void printGroups(int arr[], int n) {
   
  for (int i = 1; i < n; i++) {
    
    if (arr[i] != arr[i - 1]) {
       
      
      if (arr[i] != arr[0])
        cout << "From " << i << " to ";
 
      else
        cout << (i - 1) << endl;
    }
  }
 
  
  if (arr[n - 1] != arr[0])
    cout << (n - 1) << endl;
}
 
int main() {
 int n;
cin>>n;
int arr[n];
for(int i = 0 ; i<n ;i++){
  cin>>arr[i];
}
  
  printGroups(arr, n);
  return 0;
}