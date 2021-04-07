#include<bits/stdc++.h>
using namespace std;
bool check(string word , string p){
        unordered_map<char ,char> mapchar1 ;
        unordered_map<char ,char> mapchar2 ;
        for(int i=0;i<word.size();i++){
            if(mapchar1.find(word[i])!=mapchar1.end() ){
                if(mapchar1[word[i]] != p[i] )
                    return false;
            }
            else{
                mapchar1[word[i]]= p[i];
            }
            if(mapchar2.find(p[i])!=mapchar2.end() ){
                if(mapchar2[p[i]] != word[i] )
                    return false;
            }
            else{
                mapchar2[p[i]]= word[i];
            }
        }
        return true;
}
vector<string>ans;
vector<string> findAndReplacePattern(vector<string>& words, string p) {
        for(string s:words){
            if(s.size()!=p.size())
                continue;
            bool res = check(s,p);
            if(res)
            	ans.push_back(s);
            
    }
    return ans;
}
int main(){
	string str;
	cin>>str;
	vector<string> v;
	stringstream ss(str.substr(1,str.length()-2));
	while(getline(ss,str,',')){
		v.push_back(str.substr(1,str.length()-2));
	}
	// for(auto s:v){
	// 	cout<<s<<" ";
	// }
	string Pattern;
	cin>>Pattern;
	string p = Pattern.substr(1,Pattern.length()-2);
	findAndReplacePattern(v,p);
	for(auto s:ans){
		cout<<s<<" ";
	}

	return 0;
}