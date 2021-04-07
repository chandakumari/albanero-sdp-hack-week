#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	vector<int> v;
	stringstream ss(str.substr(1,str.length()-2));
	while(getline(ss,str,',')){
		v.push_back(stoi(str));
	}
	// for(auto s:v){
	// 	cout<<s<<" ";
	// }
	sort(v.begin(),v.end());
	for(auto s:v){
		cout<<s<<" ";
	}
	return 0;
}