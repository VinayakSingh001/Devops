#include<bits/stdc++.h>
using namespace std;
int solve(string s){
    //O(n^2) sol
    int res = 0;
    int n = s.size();
    for(int i = 0 ; i< n ;i++){
        vector<bool>visit(256);
        for(int j = i ; j< n ;j++){
            if(visit[s[j]]==true){
                break;
            }else{
                res = max(res, j-i+1);
                visit[s[j]]=true;
            }
        }
    }
    return res;
}
//O(n) sol

int optSolve(string s){
   int n = s.size();
   int res=0;
   int j =0;
   vector<int>pre(256,-1);
  for(int i = 0 ; i < n ;i++){
     j = max(j , pre[s[i]]+1);
     int maxEnd = i-j+1;
     res = max(res,maxEnd);
     pre[s[i]]=i;
   }
  return res;
}
int main(){
 string str = "abcdabdabcdefg";
 int ans = optSolve(str);
 cout<<ans<<endl;

return 0;
}