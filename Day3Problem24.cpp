#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,col;
	cin>>row>>col;
	int arr[row][col];
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cin>>arr[i][j];
			if(arr[i][j]==0)
				arr[i][j]=1;
			else
				arr[i][j]=0;
		}
	}
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
