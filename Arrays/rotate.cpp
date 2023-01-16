// #include <bits/stdc++.h>
// using namespace std;
// void reverse (int arr[] , int start , int end){
//     int temp ;
//     while(start<end){
//         temp = arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//         start++;
//         end--;
//     }
// }
// int main()
//  {
// 	//code
// 	int n,d;
// 	cin>>n>>d;
// 	int arr[n];
// 	for(int i = 0 ; i < n-1 ; i++){
// 	    cin>>arr[i];
// 	}
// 	reverse(arr , 0 , d-1);
// 	reverse(arr , d , n-1);
// 	reverse(arr , 0 , n-1);
	
// 	for(int i = 0 ; i < n-1 ; i++){
// 	    cout<<arr[i];
// 	}
	
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;
void rotateArray (int arr[] , int n){
    int temp = arr[0];
    for (int i = 1; i < n ; i++) {
     arr[i-1]=arr[i];
    }
    arr[n-1]= temp;
}
int main()
 {
    //code
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n-1 ; i++){
        cin>>arr[i];
    }
   
    rotateArray(arr,n);
    
    for(int i = 0 ; i < n-1 ; i++){
        cout<<arr[i];
    }
    
    return 0;
}