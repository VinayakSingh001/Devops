#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int start , int end){
       
        if(start>=end){
            return;
        }
            int temp = arr[start];
            arr[start]= arr[end];
            arr[end] = temp;
     reverseArray(arr , start+1 , end - 1);
}
 
void printArray(int arr[] , int N){
    for (int i = 0; i < N; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
       
    }
    
}
int main(){
 int N ;
 cin>>N;
 int A[N];
 for (int i = 0; i < N; i++)
 {
     /* code */
     cin>>A[i];
 }
 reverseArray(A , 0 , N-1);
 printArray(A , N);

return 0;
}