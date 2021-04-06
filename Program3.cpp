#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum += arr[i];
	}
	if(sum == 0)
		cout<<"Even"<<endl;
	else if(sum%2 == 0){
		cout<<"Even"<<endl;
	}
	else if(sum%2 !=0)
		cout<<"Odd"<<endl;
	return 0;
}