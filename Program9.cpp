#include<bits/stdc++.h>
using namespace std;
int main(){
	int numDays;
	cin>>numDays;
	int prices[numDays];
	for(int i=0; i<numDays; i++){
		cin>>prices[i];
	}
	int totalProfit = 0;
	for (int i = 1; i < numDays; ++i) {
		int delta = prices[i] - prices[i-1];
		totalProfit += (delta > 0) * delta; 
	}
	cout<<totalProfit<<endl;
	return 0;
}