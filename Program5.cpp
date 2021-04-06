#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int even_num = 0;
	int odd_num = 0;
	int ans1 = 0, ans2 = 0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]%2 == 0){
			ans1 = arr[i];
			even_num++;
		}
		else{
			ans2 = arr[i];
			odd_num++;
		}
	}
	if(even_num == 1)
		cout<<ans1<<endl;
	else
		cout<<ans2<<endl;
	return 0;
}