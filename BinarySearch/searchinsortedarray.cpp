/*Given an array first we need to rotate it by a number d then find the index of a asked 
number if it is not present return -1.
i/p={1,2,3,4,5,6,7,8,9}
rotate by 4
rotated array ={5,6,7,8,9,1,2,3,4}
int x= 8 
o/p = 0
IMPORTANT QUESTION*/
#include<bits/stdc++.h>
using namespace std;
// void reverse(int arr[], int low , int high){
//     int temp;
//     while(low<high){
//         temp = arr[low];
//         arr[low] = arr[high];
//         arr[high]=temp;
//         low++;
//         high--;
//     }
// }
// void leftRotate(int arr[], int n , int d){
//     reverse(arr, 0 , d-1);
//     reverse(arr , d , n-1);
//     reverse(arr , 0 , n-1);

// }
int search(int arr[] , int n , int x){
    int low = 0 , high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        //left sorted array
        if(arr[low]<arr[mid]){
            if((x>=arr[low])&&(x<arr[mid]))
            high = mid-1;
            else 
            low = mid+1;
            
        }
        //right sorted array
        else{
            if((x>arr[mid])&&(x<=arr[high]))
            low= mid+1;
            else 
            high = mid - 1;
        }
    }
    return -1;
}int main(){
    int n = 9;
    int arr[9] = {5,6,7,8,9,1,2,3,4};
    int x = 7;
    
    int ans = search(arr,n,x);
    cout<<ans<<endl;
    return 0;
}
