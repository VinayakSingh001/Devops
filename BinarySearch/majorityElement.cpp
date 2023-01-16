/*Majority Element is the element which occurs more than n/2 times in an array
Followiing algo is also known as moore voting algorithm
*/ 
#include<bits/stdc++.h>
using namespace std;
int majorityElement(int arr[],int n){
    //First we find an majority candidate
    int count = 1 ,res = 0;
    for(int i = 1; i < n ; i++){
        if(arr[i]==arr[res])
        count++;
        else {
        count--;
        if(count==0){
            count = 1;
            res = i;
        }
        }
    }
    //We check our candidate is actually majority or not
    count = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]==arr[res])
        count++;
    }
    if(count<=n/2){
    res = -1;
    }
    return res;
    
}
int main(){
    int arr[8]= {1,2,3,2,2,2,4,2};
    cout<<majorityElement(arr,8);
    return 0;
}