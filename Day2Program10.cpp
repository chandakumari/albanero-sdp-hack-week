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
	sort(v.begin(),v.end());
	int max_sum=0;
	for(int i=v.size()-1; i>=5; i--){
		max_sum += v[i];
	}
	cout<<max_sum<<endl;
	return 0;
}