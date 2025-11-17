#include<bits/stdc++.h>
using namespace std;

pair<string, string> tach(string s){
	int pos = s.find(" - ");
	string doiNha = s.substr(0, pos);
	string doiKhach = s.substr(pos + 3);
	return {doiNha, doiKhach};
}

pair<string, int> tiSo(string s, int type){
	if(type == 0){
		int pos = s.rfind(" ");
		return {s.substr(0, pos), stoi(s.substr(pos + 1))};
	}
	else{
		int pos = s.find(" ");
		return {s.substr(pos+ 1), stoi(s.substr(0, pos))};
	}
}

map<string, int> mp;

bool cmp(string a, string b){
	if(mp[a] != mp[b]) return mp[a] > mp[b];
	return a < b;
}
int main(){
	string s;
	while(getline(cin , s)){
		pair<string, string> tmp = tach(s);
		string doiNha = tmp.first, doiKhach = tmp.second;
		pair<string, int> nha = tiSo(doiNha, 0);
		pair<string, int> khach = tiSo(doiKhach, 1);
		mp[nha.first] += nha.second;
		mp[khach.first] += khach.second;
	}
	vector<string> v;
	for(auto x : mp){
		v.push_back(x.first);
	}
	sort(v.begin(), v.end(), cmp);
	for(auto x : v){
		cout << x << " " << mp[x] << endl;
	}
}
