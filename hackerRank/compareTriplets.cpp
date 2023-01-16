#include <bits/stdc++.h>
using namespace std;

int main(){
    int num ;
    cin>>num;
    int arr[num];
    for (int i = 0; i < num; i++) {
       cin>>arr[num];
    }
   int pos = 0 , zero= 0, neg = 0;
   for(int i = 0 ; i < num ; i++){
       if(arr[i]>0){
           pos++;
       }else if(arr[i]== 0){
           zero++;
       }else{
           neg++;
       }
    }
    double posRatio =  pos/num;
    double zeroRatio = zero/num;
    double negRatio = neg / num;
    cout<<setprecision(6)<<posRatio<<endl;
    cout<<setprecision(6)<<negRatio<<endl;
    cout<<setprecision(6)<<zeroRatio<<endl;
  return 0;
}