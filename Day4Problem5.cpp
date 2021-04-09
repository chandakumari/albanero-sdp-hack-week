/*
Q35. Write a program that takes an array of two numbers and determines if the sum of the digits in each number are equal to each other.

  Examples
    ([105, 42]) ➞ true
    # 1 + 0 + 5 = 6
    # 4 + 2 = 6

    ([21, 35]) ➞ false

    ([0, 0]) ➞ true
*/
#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int>& v){
	int sum1=0,sum2=0;
	while(v[0]>0 || v[1]>0){
		int rem1 = v[0]%10;
		sum1 += rem1;
		int rem2 = v[1]%10;
		sum2 += rem2;
		v[0] /= 10;
		v[1] /= 10;
	}
	if(sum1==sum2)
		return true;
	return false;
}
int main(){
	vector<int> v(2);
	for(int i=0;i<v.size();i++){
		cin>>v[i];
	}
	if(solve(v)){
		cout << "true" <<endl;
	}
	else 
		cout << "false" << endl;
	return 0;
}