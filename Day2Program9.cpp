#include<bits/stdc++.h>
using namespace std;
bool pairExist(vector<int> &v, int sum){
	int n=v.size();
	for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (v[i] + v[j] == sum)
                return true;
 
    return false;
}
int main(){
	string str;
	cin>>str;
	vector<int> v;
	stringstream ss(str.substr(1,str.length()-2));
	while(getline(ss,str,',')){
		v.push_back(stoi(str));
	}
	int n;
	cin>>n;
	if(pairExist(v,n))
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	return 0;
}