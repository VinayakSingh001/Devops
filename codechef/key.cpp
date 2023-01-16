#include<bits/stdc++.h>
using namespace std;
int max_no(int N){
    int max_l = 0;
    while (N)
    {
        /* code */
        int r = N%10;
        max_l = max(r , max_l);
        N = N/10;
    }
    return max_l;   
}
int min_no(int N){
    int min_l = 9;
    while (N)
    {
        /* code */
        int r = N%10;
        min_l = min(r , min_l);
        N = N/10;
    }
    return min_l;   
}
int key(int a , int b , int c){
    int l = max_no(a)+max_no(b)+max_no(c);
    int s = min_no(a)+ min_no(b)+min_no(c);
  return l - s;
}
int main(){
int ans = key(745,456,789);
cout<<ans<<endl;
return 0;
}