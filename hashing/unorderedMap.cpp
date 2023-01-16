#include <iostream>
#include <unordered_map> 
using namespace std;
int main(){
unordered_map <string,int> m;
m["gfg"] = 20;
m["ide"]=30;
m.insert ({"courses",15});
for(auto x : m)
cout<< x.first<<" "<< x.second<<endl;

}
// C++ program to demonstrate functionality of unordered_map
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main()
// {
// 	// Declaring umap to be of <string, int> type
// 	// key will be of string type and mapped value will
// 	// be of int type
// 	unordered_map<string, int> umap;

// 	// inserting values by using [] operator
// 	umap["GeeksforGeeks"] = 10;
// 	umap["Practice"] = 20;
// 	umap["Contribute"] = 30;

// 	// Traversing an unordered map
// 	for (auto x : umap)
// 	cout << x.first << " " << x.second << endl;

// }
