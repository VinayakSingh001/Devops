#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[5][5] = { {0,1,0,1,1},{0,0,0,1,1},{1,1,0,1,1},{0,0,0,0,0},{1,1,1,1,1}};
   int i, j, maxCount=0;
   int ans = 1;
   
   for(i=0;i<5;i++){
   
    int count=0;
      for(j=0;j<5;j++){
  
        if(arr[i][j]==1){
            count++;
        }
      }
      if(count>maxCount){
        ans = i+1;
      }
      maxCount = max(maxCount,count);
      
   }
cout<<ans<<endl;
return 0;
}