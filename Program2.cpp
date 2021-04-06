#include<bits/stdc++.h>
using namespace std;
int maxDepth(string s) {
	int maximum_depth = 0;
	int current = 0;
	for(int i=0; i<s.length(); i++) {
		if(s[i] == '(') {
			current++;
			maximum_depth = max(maximum_depth, current);
		}
		else if(s[i] == ')'){
			current--;
		}
    }
    return maximum_depth;
}
int main(){
	string str;
	cin>>str;
	int ans = maxDepth(str);
	cout<<ans<<endl;
	return 0;
}