#include<bits/stdc++.h>
using namespace std;
vector<int> numall(int num , int dick){
    vector<int>ans;
    for (int i = 0; i <= num ; i++)
    {
        /* code */
        int temp = i;
        int x;
        while(temp>0){
         x = temp%10;
         if(x==dick){
            ans.push_back(i);
         }
         temp = temp/10;
        }
    }
    // cout<<"fuck u!!!!";
    return ans;
    
}
int main(){
int n = 100;
int digit = 5;
//  cout<<"fuck u!!";

vector<int> v = numall(n,digit);
for (int i = 0; i < v.size(); i++)
{
    /* code */
    cout<<v[i]<<" ";
}

//  cout<<"fuck u!!!";
return 0;
}