/*print all the elements of two sorted array without duplicacy*/
#include<bits/stdc++.h>
using namespace std;
void unionArray(int a[],int b[],int n ,int m){
    int i = 0, j = 0;
    while(i<n&&j<m){
        if(i>0&&a[i]==a[i-1]){
            i++;
            continue;
        }
         if(j>0&&b[j]==b[j-1]){
            j++;
            continue;
        }
        if(a[i]>b[j]){
             cout<<b[j]<<"";
            j++;
        }
        else if(a[i]<b[j]){
            cout<<a[i]<<"";
            i++;
        }
        else{
            cout<<a[i]<<"";
            i++;
            j++;
        }
    }
    while(i<n){
        if(i>0&&a[i]!=a[i-1]){
            cout<<a[i]<<"";
            i++;
        }
    }
    while(j<n){
        if(j>0&&b[j]!=b[j-1]){
            cout<<b[j]<<"";
            j++;
        }
    }

}
int main(){
    int a[7]={1,1,2,3,4,4,5};
    int b[9]={2,2,3,3,5,6,7,8,8};
    unionArray(a,b,7,9);
    return 0;
    }