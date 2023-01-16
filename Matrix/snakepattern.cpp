/*print matrix in snake pattern
I/P = {10,20,30
       40,50,60
       70,80,90}
O/P = 10,20,30,60,50,40,70,80,90 */
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
    for(int i= 0 ; i < m ;i++){
      if(i%2==0)
          for(int j=0 ;j<n;j++)
          cout<<arr[i][j]<<" ";
      
      else 
      for(int j = n-1;j>=0;j--)
        cout<<arr[i][j]<<" ";
    }
    return 0;
}