//MOORES VOTING ALGORITHM
#include <bits/stdc++.h>
using namespace std;

// Function to find Majority element
// in an array
int findMajority(int arr[], int n)
{
	
	for (int i = 0; i < n; i++) {
		int count = 1;
		for (int j = i+1; j < n; j++) {
			if (arr[i] == arr[j])
				count++;
        }

		// update maxCount if count of
		// current element is greater
		if (count > n/2) 
        return i;
		
        }
      return 20;
	}

int main()
{   
    int n;
    cin>>n;
	int arr[n] ;
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
	// Function calling
	int ans = findMajority(arr, n);
    cout<<ans<<" "<<"has majority element"<<endl;
	
}
