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
	int cnt_positive_ele = 0;
	int negative_sum=0;
	for(auto ele: v){
		if(ele>0)
			cnt_positive_ele++;
		else
			negative_sum += ele;
	}
	cout<<"[";
	cout<<cnt_positive_ele<<", "<<negative_sum;
	cout<<"]"<<endl;
	return 0;
}