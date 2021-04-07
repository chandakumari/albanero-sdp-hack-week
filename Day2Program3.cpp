#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,col;
	cin>>row>>col;
	int arr[row][col];
	int cnt=0;
	for(int i=0;i<row;i++){
		for(int j=0; j<col; j++){
			cin>>arr[i][j];
			if(arr[i][j]==1)
				cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}