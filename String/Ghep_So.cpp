#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(string a, string b){
	string ab = a + b;
	string ba = b + a;
	return ab > ba;
}

int main(){
	string s;
	getline(cin, s);
	for(char &x : s){
		if(isalpha(x)) x = ' ';
	}
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss >> tmp){
		while(tmp.size() > 1 && tmp[0] == '0'){
			tmp.erase(0, 1);
		}
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), cmp);
	for(string x : v){
		cout << x;
	}
}

