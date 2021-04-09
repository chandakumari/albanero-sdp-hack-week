/*
Q37. Given an integer num, return an array of the number of 1's in the binary representation of every number in the range [0, num].
  Examples:
  Input: num = 2
  Output: [0,1,1]
  Explanation:
  0 --> 0
  1 --> 1
  2 --> 10
  Input: num = 5
  Output: [0,1,1,2,1,2]
  Explanation:
  0 --> 0
  1 --> 1
  2 --> 10
  3 --> 11
  4 --> 100
  5 --> 101
  */
#include<bits/stdc++.h>
using namespace std;
int countBit(int num){
	int ans=0;
	while(num>0){
		ans += (num&1);
		num = num>>1;
	}
	return ans;
}
vector<int>res;
vector<int> solve(int n){
	int i=0;
	while(i <= n){
		int bits = countBit(i);
		res.push_back(bits);
		i++;
	}
	return res;
}
int main(){
	int n;
	cin>>n;
	solve(n);
	for(auto ele:res){
		cout << ele << " ";
	}
	cout<<endl;
	return 0;
}