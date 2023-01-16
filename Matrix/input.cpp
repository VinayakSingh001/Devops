#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"hello"<<endl;
    int m = 3 , n = 2;
    int arr[3][2];
    //input 
    for(int i = 0 ; i < m ; i++)
      for(int j = 0 ; j < n ; j++)
         arr[i][j]=i+j;
    //output = { {0,1} , {1 , 2} , {2,3} }
      for(int i = 0 ; i < m ; i++)
      for(int j = 0 ; j < n ; j++)  
      cout<<arr[i][j]<<" ";
    
}