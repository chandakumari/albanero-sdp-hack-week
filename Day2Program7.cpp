#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,col;
	cin>>row>>col;
	int arr[row][col];
	int even_sum=0;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cin>>arr[i][j];
			if(arr[i][j]%2==0)
				even_sum += arr[i][j];
		}
	}
	cout<<even_sum<<endl;
	return 0;
}