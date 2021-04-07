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
	int k;
	cin>>k;
	sort(v.begin(),v.end());
	int i=0;
	while(k>0 && v[i]<0){
		v[i] = -(v[i]);
		i++;
		k--;
	}
	while(k>0 && v[i]==0){
		v[i] = v[i];
		k--;
	}
	while(k>0){
		v[i] = -v[i];
		k--;
	}
	int sum=0;
	for(auto ele:v){
		sum += ele;
	}
	cout<<sum<<endl;
	return 0;
}