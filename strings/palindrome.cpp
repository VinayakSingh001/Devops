#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string &str){
  
    int low = 0;
    int high = str.length();
   while(low<=high){
       if(str[low]!=str[high]){
           return false;
         
       }
       low++;
       high--;
    }
    
    return true;
    
}
int main(){
string str;
cout<<"Enter the String";
getline(cin,str);
bool ans = isPalindrome(str);
cout<<ans<<endl;

return 0;
}