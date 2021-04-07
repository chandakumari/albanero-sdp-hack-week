#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int cnt[26]={0};
	for(auto ch:str){
		cnt[ch-'a']++;
	}
	string ans="";
	while(ans.size()!=str.size()){
	for(int i=0; i<26; i++){
		if(cnt[i]!=0){
			ans += ('a'+i);
			cnt[i]--;
		}
	}
	for(int i = 25; i >= 0; --i) {
		if(cnt[i]!=0){
			ans += ('a'+i);
			cnt[i]--;
		}
	}

}
cout<<ans<<endl;
return 0;
}