#include <bits/stdc++.h>
using namespace std;
void twoSum(int arr[] , int n , int sum){
    for(int i = 0 ; i = n-2 ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(arr[i]+arr[j]==sum)
            cout<<i<<j;
        }
    }

}
int main(){
    int n , arr[n] , target;
    cin>>target;
    cin>>n;
    for(int i ; i < n ; i++){
        cin>>arr[i];
    }
    twoSum(arr , n , target);

}