#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int freq[26]={0};
	for(int i=0;i<26;i++){
		str[i] = tolower(str[i]);
		freq[str[i]-'a']++;
	}
	for(int i=0; i<26; i++){
		if(freq[i]>1){
			cout<<"False"<<endl;
			return 0;
		}
	}
	cout<<"true"<<endl;
	return 0;
}
