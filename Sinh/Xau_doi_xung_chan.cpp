#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, a[100], ok;
string s;
vector<string> res;

void sinh(){
	int i = s.size() - 1;
	while(i >= 0 && s[i] == '1'){
		s[i] = '0';
		i--;
	}
	if(i == -1) ok = false;
	else{
		s[i] = '1';
	}
}

void init(){
	for(int i=1; i<=15; i++){
		ok = 1;
		s = string(i, '0');
		while(ok){
			string tmp = s;
			reverse(tmp.begin(), tmp.end());
			res.push_back(s + tmp);
			sinh();
		}
	}
}

int main(){
	int t; cin >> t;
	init();
	while(t--){
		cin >> n;
		for(string x : res){
			if(x.size() <= n){
				cout << x << " ";
			}
			else break;
		}
		cout << endl;
	}
}
