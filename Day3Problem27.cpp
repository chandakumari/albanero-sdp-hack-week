#include<bits/stdc++.h>
using namespace std;
int main(){
	int num,length;
	cin>>num>>length;
	int n=1;
	while(length>0){
		int ans = num * n;
		cout<<ans<<" ";
		length--;
		n++;
	}
	return 0;
}