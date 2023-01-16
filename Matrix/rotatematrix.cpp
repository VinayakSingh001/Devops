/*Rotate a matrix by 90degree anticlockwise 
i/p={1,2,3
     4,5,6
     7,8,9}
o/p ={3,6,9
      2,5,8
      1,4,7}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m ,  n ;
    cout<<"enter rows"<<endl;
    cin>>m;
    cout<<"enter column"<<endl;
    cin>>n;
    int arr[m][n];
    for(int i = 0; i<m; i++){
        for(int j = 0;j<n;j++)
           cin>>arr[i][j];
    }
    for(int i = 0;i<m;i++){
        for(int j = i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i = 0; i<m;i++){
        int low = 0;
        int high = n-1;
        while(low<=high){
            swap(arr[low][i],arr[high][i]);
            low++;
            high--;
        }
    }
     for(int i = 0; i<m; i++){
        for(int j = 0;j<n;j++)
         cout<<arr[i][j]<<" ";
    }
    return 0;
}