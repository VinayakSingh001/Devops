/* eements of array from low to mid are sorted and elements from mid+1 to high are sorted 
we need to sort whole array;
i/p ={1,4,7,9,2,3,6}
o/p = {1,2,3,4,6,7,9}
*/
#include<bits/stdc++.h>
using namespace std;
void sortSortedSubarray(int arr[],int n){
    int low = 0,high = n-1;
    int mid =(high+low)/2;
    int n1 = mid-low+1;
    int n2 = high - mid;
    int left[n1]; 
    int right[n2];
    for(int i = 0; i<n1 ; i++)
    left[i]=arr[low+i];
    for(int i = 0 ; i<n2;i++)
    right[i]=arr[n1+i];
    int  i = 0,j=0,k=low;
    while(i<n1&&j<n2){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
            k++;
        }
        else{
            arr[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=right[j];
        j++;
        k++;
    }
    
    
}
void printArray(int arr[],int n){
     for(int i = 0; i<n ;i++){
         cout<<arr[i]<<"";
     }
}
int main(){
    int arr[7]={1,4,7,9,2,3,6};
    sortSortedSubarray(arr,7);
    printArray(arr,7);
    return 0;
}