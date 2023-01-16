#include<bits/stdc++.h>
using namespace std;
int const CHAR = 256;
int leftNonOccuring(string &str){
   int arr[CHAR] ;
   fill(arr,arr+CHAR,-1);
   for (int i = 0; i < str.length(); i++)
   {
       /* code */
       arr[str[i]]++;
   }
   for(int i = 0;i<str.length();i++){
       if(arr[str[i]]==0)
       return i;
   }
   return -1;
}
//Efficient Approach
int lNonOccuring(string &str)
int main(){
string str = "baccd";
int ans = leftNonOccuring(str);
cout<<str[ans]<<endl;

return 0;
}