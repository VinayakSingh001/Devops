/*An array which is sorted can have duplicate numbers we need to calculate Number of times
a given number is present in array.
I/p={10,20,30,30,30,40,40}
x=30
o/p=3*/
#include<bits/stdc++.h>
using namespace std;
int firstOccurance(int arr[] , int n  , int y){
    int low = 0;
    int high = n-1;
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
int lastOcc(int arr[],int n , int x){
    int  low=0;
    int high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>x)
        high = mid - 1;
        else if(arr[mid]<x)
        low=mid+1;
        else{
            if((mid==n-1)||arr[mid+1]!=arr[mid])
            return mid;
            else 
            low=mid+1;
        }
    }
    return -1;
}
int countOcc(int arr[], int n , int x){
    int first = firstOccurance(arr , n , x);
    if(first == -1)
    return 0;
    else 
    return (lastOcc(arr,n,x)-first+1);

}
int main(){
    int n = 7;
    int arr[7]={ 1,1,2,2,2,2,3};
    int x = 2;
    int ans = countOcc(arr , n , x);
    cout<<ans<<endl;
    return 0;
}