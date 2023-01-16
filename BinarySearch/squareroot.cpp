// /*we need to calculate square root of a given number in O(log n)
// if number is not perfect square give its floor value 
// x=15
// o/p = 3
// */
#include<bits/stdc++.h>
using namespace std;
int sqRoot(int x){
    if (x == 0 || x == 1)
        return x;
 
    int start = 1, end = x / 2, ans;
    while (start <= end) {
        int mid = (start + end) / 2;
        int sqr = mid * mid;
        if (sqr == x)
            return mid;
        if (sqr <= x) {
            start = mid + 1;
            ans = mid;
        }
        else 
            end = mid - 1;
    }
    return ans;
}
 int main(){
    int number;
    cout<<"enter Number"<<endl;
    cin>>number;
    int root = sqRoot(number);
    cout<<root<<endl;
    return 0;
    
 }

