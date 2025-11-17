#include<bits/stdc++.h>
using namespace std;

map<string, int> mp;
pair<string, string> tach(string s){
	int pos = s.find(" - ");
	string doiNha = s.substr(0, pos);
	string doiKhach = s.substr(pos + 3);
	return {doiNha, doiKhach};
}

bool cmp(string a, string b){
	if(mp[a] != mp[b]) return mp[a] > mp[b];
	return a<b;
}

int main(){
	string s; 
	while(getline(cin, s)){
		pair<string, string>tmp = tach(s);
		mp[tmp.first]++;
		mp[tmp.second]++;
	}
	vector<string> v;
	for(auto x : mp){
		v.push_back(x.first);
	}
	sort(v.begin(), v.end(), cmp);
	for(string x : v){
		cout << x << " " << mp[x] << endl;
	}
}
