// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    long long int a[4],count = 0,x=-1,y=-1;
// 	    for(int i =0; i<4; i++){
// 	        cin>>a[i];
// 	    }
// 	    sort(a,a+4);
// 	    if(a[1]==a[2]&&a[0]==a[1]-1&&a[3]==a[1]+1){
// 	        count++;
// 	        x = a[2];
// 	        y = 1;
// 	    }
// 	    else if(a[0]<0&&a[1]==0&&a[2]==abs(a[0])+1&&a[2]==a[3]-1){
// 	        count++;
// 	        x= 1;
// 	        y = a[2];
// 	    }
// 	    else if(a[0]<0){
// 	        int q,w;
// 	        q= (a[0]+a[2])/2;
// 	        w= a[2]-q;
// 	        if(q*w==a[3]&&a[1]==0){
// 	            count++;
// 	           x = q;
// 	           y = w;
// 	        }
// 	    }
// 	    else{
	        
// 	        int q1 , w1;
// 	         q1= (a[0]+a[2])/2;
// 	        w1= a[2]-q1;
// 	        if(q1*w1==a[3]&&q1==w1*a[1]){
// 	            count++;
// 	           x = q1;
// 	           y = w1;
// 	        } 
// 	        int q2 , w2;
// 	        q2= (a[1]+a[2])/2;
// 	        w2= a[2]-q2;
// 	        if(q2*w2==a[3]&&q2==w2*a[0]){
// 	           count++;
// 	           x = q2;
// 	           y = w2;
// 	        }  
// 	   }
	   
// 	   if(x>=1&&y>=1&&x<=10000&&y<=10000){
// 	       cout<<x<<" "<<y<<endl;
// 	   }else{
// 	       cout<<"-1 -1"<<endl;
// 	   }
// 	}
// 	return 0;
// }
 #include <bits/stdc++.h>  
using namespace std; 
int ans1=-1,ans2=-1; 
int fun(int sum,int sub,int divs,int mul) 
{ 
    int a=0,b=0; 
    if((sum+sub)%2==0) 
        a=(sum+sub)/2; 
    else 
        return -1; 
    if(a>=1&&mul%a==0) 
       b=mul/a; 
    else return -1; 
    if(b>=1&&a/b==divs&&a+b==sum&&a-b==sub&&a*b==mul) 
    { 
        ans1=a,ans2=b; 
        return 1; 
    } 
    return -1; 
} 
int main() { 
    int t; 
    cin>>t; 
    while(t--) 
    {  
        long long int a[4],arr[3],i=0,maxi=-1e9+7,maxi_index=-1,j=0; 
        ans1=-1,ans2=-1; 
        unordered_map<int,int> maps; 
        for(i=0;i<4;i++) 
       { cin>>a[i]; maps[a[i]]++; } 
        sort(a,a+4); 
        if(a[0]+2==a[3]&&a[1]+1==a[3]&&a[2]+1==a[3]&&a[1]>=1) 
            ans1=a[1],ans2=1; 
        else if(a[0]<0&&a[1]==0&&a[2]+1==a[3]&&a[0]==1-a[2]&&a[2]>=1) 
            ans1=1,ans2=a[2]; 
        else{ 
        if(fun(a[0],a[1],a[2],a[3])==-1) 
        if(fun(a[0],a[2],a[1],a[3])==-1) 
        if(fun(a[1],a[0],a[2],a[3])==-1) 
        if(fun(a[2],a[0],a[1],a[3])==-1) 
        if(fun(a[2],a[1],a[0],a[3])==-1) 
            fun(a[1],a[2],a[0],a[3]); 
       } 
       if(ans1>=1&&ans1<=10000&&ans2>=1&&ans2<=10000) 
        cout<<ans1<<" "<<ans2<<endl; 
       else 
        cout<<"-1 -1"<<endl; 
    } 
 return 0; 
}