//We have to return index of first occurance 
//i/p = [10 , 20 , 30 ,40 ,40 ,40]
//x = 40
//o/p = 3
//using recursive binary Search 
#include<bits/stdc++.h>
using namespace std;
int firstOcc(int arr[], int low , int high , int x)
{
    if(low>high){
    return -1;
    }
    int mid = (low+high)/2;
   
    if(arr[mid]>x)
    return firstOcc( arr, low , mid-1 ,x);
    else if(arr[mid]<x)
    return firstOcc(arr, mid+1 , high , x);
    else
    if(mid==0|| arr[mid-1]!= arr[mid])
    return mid;
    else
    return firstOcc(arr, low , mid-1 , x);
    
}
//using iterative
int firstOccurance(int arr[] , int low , int high , int y){
    while(low<=high){
       int  mid = (low+high)/2;
        if(arr[mid]>y)
        high =  mid-1 ;
        else if(arr[mid]<y)
        low =  mid+1 ;
        else{
             if(mid==0|| arr[mid-1]!= arr[mid])
             return mid;
             else
             high = mid -1;
        }
    }
  return -1;
}

int main(){
    int n = 8 ;
    int arr[8] = {10 , 20 , 30 , 40 , 40 ,40 , 50 ,50};
    int x = 40;
    int y = 50;
    int low=0;
    int high = n-1;
    int ans = firstOcc(arr,low,high,x);
    int answer = firstOccurance(arr , low , high , y);
    cout<<ans<<endl;
    cout<<answer<<endl;
    return 0;
}

