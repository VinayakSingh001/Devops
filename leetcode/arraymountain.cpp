/*Given an array of integers arr, return true if and only if it is a valid mountain array.

Recall that arr is a mountain array if and only if:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1] 
Input: arr = [2,1]
Output: false
Input: arr = [3,5,5]
Output: false
Input: arr = [0,3,2,1]
Output: true */
#include<bits/stdc++.h>
using namespace std;
bool mountainArray(int arr[],int n){
    int i = 0;
    while(i+1<n&&arr[i]<arr[i+1]){
         i++;
    }
    if(i==0||i==n-1)
    return false;
    while(i+1<n&&arr[i]>arr[i+1]){
        i++;
    }
    if(i==n-1)
    return true;
    else
    return false;

}
int main(){
    int arr[10]={9,8,7,65,4,3,2,1,0};
    if(mountainArray(arr,10)){
        cout<<"True"<<endl;
    }
    else
    cout<<"False"<<endl;
    return 0;
}