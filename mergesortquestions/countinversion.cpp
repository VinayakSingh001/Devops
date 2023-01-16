// /*count number of inversion of an array
// inversion is when i<j but arr[i]>arr[j]*/
// #include<bits/stdc++.h>
// using namespace std;
// int countAndMerge(int arr[],int low, int mid, int high){
//       int n1= mid-low+1;
//       int n2 = high-mid;
//       int left[n1];
//       int right[n2];
//       for(int i =0 ;i<n1; i++){
//           left[i]=arr[low+i];
//       }
//       for (int i = 0; i < n2; i++)
//       {
//           /* code */
//           right[i]=arr[mid+1+i];
//       }
//       int i = 0,j=0,k=low,res=0;
//       while(i<n1&&j<n2){
//           if(left[i]<=right[j]){
//               arr[k]=left[i];
//               i++;
//               k++;
//           }
//           else if(left[i]>right[j]){
//               arr[k]=right[j];
//               res = res+(n1-i);
//               j++;
//               k++;
//            }
//         }
//         while(i<n1){
//             arr[k]=left[i];
//             i++;
//             k++;
//         }
//          while(j<n2){
//               arr[k]=right[j];
//               j++;
//               k++;
//          }
//       return res;
// }
// int countInversion(int arr[],int low,int high)
// {
//     int res=0;
//     while(low<high){
//         int mid = low+(high-low)/2;
//         res+=countInversion(arr,low,mid);
//         res+=countInversion(arr,mid+1,high);
//         res+=countAndMerge(arr,low,mid,high);
//     }
//     return res;
// }
// int main(){
//     int a[5]={1,4,5,2,3};
//     int low = 0;
//     int high = 4;
//     int ans = countInversion(a,0,4);
//     cout<<ans<<endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
 
int _mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid,
          int right);
 
/* This function sorts the
   input array and returns the
number of inversions in the array */
int mergeSort(int arr[], int array_size)
{
    int temp[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1);
}
 
/* An auxiliary recursive function
  that sorts the input array and
returns the number of inversions in the array. */
int _mergeSort(int arr[], int temp[], int left, int right)
{
    int mid, inv_count = 0;
    if (right > left) {
        /* Divide the array into two parts and
        call _mergeSortAndCountInv()
        for each of the parts */
        mid = (right + left) / 2;
 
        /* Inversion count will be sum of
        inversions in left-part, right-part
        and number of inversions in merging */
        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);
 
        /*Merge the two parts*/
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}
 
/* This funt merges two sorted arrays
and returns inversion count in the arrays.*/
int merge(int arr[], int temp[], int left, int mid,
          int right)
{
    int i, j, k;
    int inv_count = 0;
 
    i = left; /* i is index for left subarray*/
    j = mid; /* j is index for right subarray*/
    k = left; /* k is index for resultant merged subarray*/
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
 
            /* this is tricky -- see above
            explanation/diagram for merge()*/
            inv_count = inv_count + (mid - i);
        }
    }
 
    /* Copy the remaining elements of left subarray
(if there are any) to temp*/
    while (i <= mid - 1)
        temp[k++] = arr[i++];
 
    /* Copy the remaining elements of right subarray
       (if there are any) to temp*/
    while (j <= right)
        temp[k++] = arr[j++];
 
    /*Copy back the merged elements to original array*/
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
 
    return inv_count;
}
 
// Driver code
int main()
{
    int arr[] = { 1,4,5,2,3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = mergeSort(arr, 5);
    cout << " Number of inversions are " << ans;
    return 0;
}
