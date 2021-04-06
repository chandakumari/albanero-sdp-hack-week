#include<bits/stdc++.h>
using namespace std;
int main(){
	int First_Num, Comm_diff, Total_num;

	cin>>First_Num>>Comm_diff>>Total_num;

	for(int i=1; i<=Total_num; i++){
		cout<<First_Num<<" ";
		First_Num += Comm_diff;
	}
	
	return 0;
}