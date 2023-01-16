/* Traverse the matrix spirally 
i/p = {1,2,3
       4,5,6
       7,8,9}
o/p = {1,2,3,6,9,8,7,4,5}*/

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
    int top = 0, left = 0, right = n-1 , bottom = m-1;
    while(top<=bottom&&left<=right){
        for(int i = left ; i <= right ; i++)
        cout<<arr[top][i]<<"";
        top++;
        for(int i = top ; i <=bottom ;i++ )
        cout<<arr[i][right]<<"";
        right--;
        if(top<=bottom){
            for(int i = right ; i >= left ;i--){
                cout<<arr[bottom][i]<<"";
                bottom--;
            }
        }
        if(left<=right){
            for(int i=bottom ; i>= top ; i--){
                cout<<arr[i][left]<<"";
                left++;
            }
        }
      
    }
    return 0;
}
