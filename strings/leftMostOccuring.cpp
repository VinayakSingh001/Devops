#include<bits/stdc++.h>
using namespace std;
int const CHAR = 256;
int leftMostOccuring(string &str){
    int firstIndex[CHAR];
    fill(firstIndex,firstIndex+CHAR,-1);
    int res = INT_MAX;
    for(int i = 0; i< str.length();i++){
        int fi = firstIndex[str[i]];
        if(fi==-1){
            firstIndex[str[i]]=i;
        }else
         res = min(res,fi);
    }

    return res;
}
//Efficient Approach
int leftmostOccuring(string &str){
    bool findex[CHAR];
    fill(findex,findex+CHAR,false);
    int res = -1;
    for (int i = str.length()-1; i >= 0; i--)
    {
        /* code */
        if(findex[str[i]])
        res = i;
        else
        findex[str[i]]=true;
    }
    
    return res;
}
int main(){
string str = "abccbd";
string str1 = "vinayaksingh";
int ans = leftMostOccuring(str);
int answer = leftmostOccuring(str1);
cout<<answer<<endl;
cout<<ans<<endl;

return 0;
}