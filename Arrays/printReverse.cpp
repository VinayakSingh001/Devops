#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0; i < N ; i++){
        cin>>arr[i];
    }
    for ( int i = 0,  i < N; i++)  
    {     
       int temp = arr[i];  
        arr[i] = arr[j];  
        arr[j] = temp;  
    }  
    for(int i = 0; i < N ; i++){
        cout<<arr[i];
    }
    
    //    int B[N];
        
    //     for(int i = 0 ; i < N-1 ; i++){
    //         for(int j = i+1; j<N ; j++){
    //             if(A[i]<A[j]){
    //                 B[i]=A[j]-A[i];
    //                 break;
    //             }else{
    //                 B[i]=-1;
    //                 break;
    //             }
    //         }
    //     }
    //      B[N-1]=-1;
    //      for(int k = 0 ; k < N-2 ; k++){
    //          if(B[k]>B[k+1]){
    //              cout<<"0";
    //              return 0;
    //          }
    //      }
    //     cout<<"1";
        return 0;
    }

