/*peak element is the element which is greater than both of its neighbours
every array has an peak element
*/
#include<bits/stdc++.h>
using namespace std;
int peakElement(int arr[], int n){
    int low = 0 , high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if((mid==0||arr[mid-1]>=arr[mid])&&(mid=n-1||arr[mid+1]>=arr[mid]))
        return mid;
// the side of array which have number greater than mid element will definitely have a 
// peak element
        if(mid>0&&arr[mid-1]>=arr[mid])
        high = mid-1;
        else low = mid+1;
    }
    return -1;
}
int main(){
    int n = 6;
     int arr[6]={1,3,2,5,7,4};
     cout<<peakElement(arr,n)<<" "<<arr[peakElement(arr,n)]<<endl;
     return 0;
     }