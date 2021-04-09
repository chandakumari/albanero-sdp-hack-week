/*
Q32. A set is a collection of unique items. A set can be formed from an array from removing all duplicate items.

  [1, 3, 3, 5, 5, 5]
  // original array

  [1, 3, 5]
  // original array transformed into a set
  Write a program that sorts an array and removes all duplicate items from it.

  Examples
    ([1, 3, 3, 5, 5]) ➞ [1, 3, 5]
    ([4, 4, 4, 4]) ➞ [4]
    ([5, 7, 8, 9, 10, 15]) ➞ [5, 7, 8, 9, 10, 15]
    ([3, 3, 3, 2, 1]) ➞ [1, 2, 3]

  Notes
    All arrays will have at least one element.
    For this question, output an array, not a set.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;  // [1, 3, 3, 5, 5, 5]
	vector<int> v;
	stringstream ss(str.substr(1,str.size()-2));
	while(getline(ss,str,',')){
		v.push_back(stoi(str));
	}
	set<int> s;
	for(int ele:v){
		s.insert(ele);
	}
	for(auto i:s){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}