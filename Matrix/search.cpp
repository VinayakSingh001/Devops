/*Search in a row and column wise sorted matrix */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m ,  n , x;
    cout<<"enter rows"<<endl;
    cin>>m;
    cout<<"enter column"<<endl;
    cin>>n;
    int arr[m][n];
    for(int i = 0; i<m; i++){
        for(int j = 0;j<n;j++)
           cin>>arr[i][j];
    }
    cout<<"enter x"<<endl;
    cin>>x;
    int i = 0, j = n-1;
    while(i<=m&&j>=0){
        if(arr[i][j]==x){
            cout<<i<<","<<j;
            return 0;
        }
        else if(arr[i][j]>x)
          j--;
        else 
          i++;

    }
    cout<<"Not Found"<<endl;
    return 0;
    
}