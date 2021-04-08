#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int cnt=0;
	int sum = 0;
	while(n>0){
		int rem = n%10;
		sum += rem;
		n /= 10;
		cnt++;
	}
	int ans = sum/cnt;
	cout<<ans<<endl;
	return 0;
}