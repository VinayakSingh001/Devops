#include<bits/stdc++.h>
using namespace std;
int main(){
kadanesAlgo(int arr[] , int N){
    int maxSum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        /* code */
        sum = sum+arr[i];
        if(maxSum>sum){
           maxSum = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    return maxSum;
    
}
 int N;
 cin>>N;
 int arr[N];
 for (int i = 0; i < N; i++)
 {
     /* code */

 }
 
return 0;
}