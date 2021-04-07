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
	deque<int> dq;

	for(auto ele: v){
		if(ele%2==0)
			dq.push_back(ele);
	}
	cout<<"["<<dq.front();
	dq.pop_front();
	while(!dq.empty()){
		cout<<", "<<dq.front();
		dq.pop_front();
	}
	cout<<"]"<<endl;
	return 0;
}