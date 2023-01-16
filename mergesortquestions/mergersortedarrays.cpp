/* need to merge two sorted arrays with stability*/
#include <bits/stdc++.h>
using namespace std;
void mergeArrays(int a[] , int b[] , int m , int n){
    int i = 0 , j = 0;
    while (i<m&&j<n)
    {
        /* code */
        if(a[i]<=b[j]){
        cout<<a[i]<<" ";
        i++;
        }
        else{
        cout<<b[j]<<" ";
        j++;
        }
    }
    while(i<m){
    cout<<a[i]<<" ";
        i++;
    }
    while(j<n){
    cout<<b[j]<<" ";
        j++;
    }
}
int main(){
    int arr[5]={1,2,3,7,8};
    int brr[6]={4,5,6,9,10,11};
    mergeArrays(arr,brr,5,6);
    return 0;
}