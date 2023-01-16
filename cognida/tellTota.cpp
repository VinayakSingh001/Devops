#include<bits/stdc++.h>
using namespace std;
vector<int> sol(vector<int>score, vector<int>queries){
    vector<int>ans;
    int n = score.size();
    int m = queries.size();
    for(int i = 0 ; i < m ; i++){
        int point = queries[i];
        int sum = 0;
        for (int j = 0; j < point; j++)
        {
            /* code */
            sum += score[j];

        }
         ans.push_back(sum);
        
    }
   return ans;
}

int main(){
vector<int>a = {1,2,3,4};
vector<int>b = {2,3};
vector<int> v=sol(a,b);
for (int i = 0; i < v.size(); i++)
{
   
    cout<<v[i]<<" ";
}

return 0;
}