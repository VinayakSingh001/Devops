#include<bits/stdc++.h>
using namespace std;
string solve(string str){
    string s = str.substr(0,2);
    stringstream geek(s);
    int x = 0;
    geek>>x;
    int tens = (x/10)%10;
    cout<<tens<<endl;
    if (tens==0){
        return "am";
    }
    if(10<=x&&x<=12){
        return "am";
    }
    if(x>12){
        return "pm";
    }
}
int main(){
string str = "22:00";
string ans = solve(str);
cout<<ans<<endl;

return 0;
}