#include<bits/stdc++.h>
using namespace std;
int solve(int num1,int num2){
	//string str="";
	int sum = 0;
	while(num1>0 && num2>0){
		int rem1 = num1%10;
		int rem2 = num2%10;
		int diff = abs(rem1-rem2);
		// str = str.insert(0,to_string(diff));
		sum += diff;
		num1 /= 10;
		num2 /= 10;
	}
	//int ans= stoi(str);
	return sum;
}
int main(){
	int num1,num2;
	cin>>num1>>num2;
	cout<<solve(num1,num2)<<endl;
	return 0;
}