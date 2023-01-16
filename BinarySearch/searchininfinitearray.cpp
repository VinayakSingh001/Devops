/*need to find a number in infinite size array in O(logposition) time complexity*/
//
//
//
/*IMPORTANT*/
//
//
//
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[] , int low , int high , int x ){
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]>x)
        high = mid - 1;
        else
        low = mid+1;
    }
    return -1;
    
}
int findNum(int arr[], int n , int x){
      if(arr[0]==x)
      return 0;
      int i = 1;
      while(arr[i]<x){
      i = i*2;
      if(arr[i] == x)
      return i;
      }
      return binarySearch(arr , i/2+1, i-1 , x);
}

int main(){
    int n = 20;
    int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int x= 5;
    int ans = findNum(arr , n ,x);
    cout<<ans<<endl;
    return 0;
}