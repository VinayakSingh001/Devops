#include<bits/stdc++.h>
using namespace std;
bool subSequence(string &str1 , string &str2 , int n , int m){
    int j = 0;
    for(int i = 0 ; i < n&&j< m ; i++){
        if(str1[i]==str2[j])
        j++;
    }
   if(j==m)
   return true;
   else 
   return false;
}
int main(){
string s1 = "abcdefgh";
string s2 = "abc";
int n = s1.length();
int m = s2.length();
bool ans  = subSequence(s1 ,s2, n ,m);
cout<<ans<<endl;

return 0;
}