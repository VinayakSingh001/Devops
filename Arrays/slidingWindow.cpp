#include <bits/stdc++.h>
using namespace std;
int maxConsSum(int arr[] , int n , int k){
    int maxSum = INT_MIN;
    for(int i = 0 ; i+k-1<n ; i++){
        int sum = arr[i]+arr[i+1]+arr[i+2];
        maxSum = max(sum , maxSum);
    }
    return maxSum;
}
int main(){
    int k = 3;
    int arr[6]={1,8,30,-5,20,7};
    int ans = maxConsSum(arr , 6 , 3);
    cout<<ans<<endl;
}