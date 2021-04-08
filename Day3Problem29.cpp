#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v;
	while(n>0){
		int rem = n%10;
		v.push_back(rem);
		n /= 10;
	}
	for(int i=v.size()-1; i>=0; i--){
		cout<<(v[i]*v[i]);
	}
	return 0;
}