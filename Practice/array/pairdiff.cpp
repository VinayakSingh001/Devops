#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> printPairs(int arr[], int arr_size, int sum)
{  
    vector<pair<int,int>>v;
    sum = sum*2;
	unordered_set<int> s;
	for (int i = 0; i < arr_size; i++)
	{
		int temp = sum + arr[i];

		if (s.find(temp) != s.end())
	
            v.push_back(make_pair(arr[i],temp));

		s.insert(arr[i]);
	}
    return v;
}

/* Driver Code */
int main()
{
	int A[] = { 4,7,2,9,1,3,5 };
	int n = 1;
	int arr_size = sizeof(A) / sizeof(A[0]);
    vector<pair<int,int>>ans=printPairs(A, arr_size, n);

       for (int i=0; i<ans.size(); i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << ans[i].first << " "
             << ans[i].second << endl;
    }

	return 0;
}