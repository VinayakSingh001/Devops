/* write common elements of two sorted arrays without duplicacy*/
#include<bits/stdc++.h>
using namespace std;
void intersection(int a[],int n,int b[],int m){
    int i = 0,j=0;
    while(i<n&&j<m){
         if(i>0&&a[i]==a[i-1]){
             i++;
             continue;
         }
         if(a[i]>b[j]){
             j++;
         }
         if(a[i]<b[j]){
             i++;
         }
         else{
             cout<<a[i]<<"";
             i++;
             j++;
             
         }
    }
}
int main(){
    int a[7]={1,2,2,3,4,6,6};
    int b[7]={1,2,3,4,5,6,7};
    intersection(a,7,b,7);
    return 0;
}