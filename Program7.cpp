#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int nums[n];
	for(int i=0; i<n; i++){
		cin>>nums[i];
	}
	int i=0,j=0,count=0,Long_Subarray_len=0;
	while(j<n){
		if(nums[j]==0){
			count++;
		}
		if(count<=k)
			Long_Subarray_len=max(Long_Subarray_len,j-i+1);
		else if(count>k){
			while(count>k){
				if(nums[i]==0){
					count--;
				}
				i++;
			}
			Long_Subarray_len=max(Long_Subarray_len,j-i+1);
		}
            j++;
            
        }
        cout<<Long_Subarray_len<<endl;
        return 0;
}