/* we need to print index of last occurance of a number in a given sorted array
I/O = {10,20,30,40,40,40,50}
if number is 40 
O/P = 5
*/
#include<bits/stdc++.h>
using namespace std;
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
int main(){
    int n = 9;
    int arr[9]={10 , 20 , 30 , 30 ,30, 40 , 40 , 40 , 50};
    int x = 30;
    int ans = lastOcc(arr,n,x);
    cout<<ans<<endl;
    return 0;
}
