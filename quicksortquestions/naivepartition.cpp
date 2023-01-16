#include<bits/stdc++.h>
using namespace std;
void naivePartition(int arr[],int low , int high ,int pivot){
    int temp[high-low+1],index=0;
    for(int i = low;i<=high;i++){
        if(arr[i]<=arr[pivot]){
            temp[index]==arr[i];
            index++;
        }
    }
    for (int i = low; i <= high; i++)
    {
        /* code */
        if(arr[i]>arr[pivot]){
            temp[index]=arr[i];
            index++;
        }
    }
    for (int i = low; i <= high; i++)
    {
        /* code */
        arr[i]=temp[i-low];
        cout<<arr[i]<<"";
    }

    
}
int main(){
int arr[7]={1,3,4,6,8,2,5};
naivePartition(arr,0,6,6);


return 0;
}