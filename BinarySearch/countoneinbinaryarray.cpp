/*need to count number of occurances of 1 in a sorted binary array
i/p = {0 , 0,0,1,1,1,1}
o/p = 4*/
#include<bits/stdc++.h>
using namespace std;
int countOne(int arr[] , int n ){
    int low = 0;
     int high = n-1;
    while(low<=high){
        int mid = (low+high )/2;
        if(arr[mid]==0)
        low = mid +1;
        else {
            if(mid==0||arr[mid-1]==0)
            return (n-mid);
            else 
            high = mid - 1;
        }
    }
    return -1;
}
int main(){
     int n = 7;
     int arr[7]={0,0,0,1,1,1,1};
     int ans = countOne(arr,n);
     cout<<ans<<endl;
     return 0;
}