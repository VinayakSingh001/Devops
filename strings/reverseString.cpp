#include<bits/stdc++.h>
using namespace std;

void reverseString(char str[], int n){
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(str[i]== ' '){
             reverse(str,start,i-1);
             start = i+1;
        }
    }
    reverse(str,start,n-1);
    reverse(str,0,n-1);
    for(int i = 0; i <n ;i++){
        cout<<str[i]<<endl;
    }
}
void reverse(char str[],int low,int high){
  
    while(low<=high){
        swap(str[low],str[high]);
        low++;
        high--;
    }
}
int main(){
char str[]={"welcome to gfg"};
reverseString(str,14);

return 0;
}