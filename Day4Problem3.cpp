/*
Q33. Write a program that takes an array of names and returns an array where only the first letter of each name is capitalized.

  Examples
    (["mavis", "senaida", "letty"]) ➞ ["Mavis", "Senaida", "Letty"]
    (["samuel", "MABELLE", "letitia", "meridith"]) ➞ ["Samuel", "Mabelle", "Letitia", "Meridith"]
    (["Slyvia", "Kristal", "Sharilyn", "Calista"]) ➞ ["Slyvia", "Kristal", "Sharilyn", "Calista"]
  
  Notes
    Don't change the order of the original array.
    Notice in the second example above, "MABELLE" is returned as "Mabelle".
*/
#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
vector<string> solve(vector<string>&v){
	for(auto str:v){
		for(int i=0;i<str.length();i++){
			if(i==0)
				str[i]=toupper(str[i]);
			else
				str[i]=tolower(str[i]);
		}
		ans.push_back(str);
	}
	return ans;
}
int main(){
	string str;
	cin>>str; // (["mavis", "senaida", "letty"])
	vector<string> v;
	stringstream ss(str.substr(2,str.size()-4));
	while(getline(ss,str,',')){
		v.push_back(str.substr(1,str.size()-2));
	}
	for(auto str:ans){
		cout<<str<<" ";
	}
	cout<<endl;
	return 0;
}