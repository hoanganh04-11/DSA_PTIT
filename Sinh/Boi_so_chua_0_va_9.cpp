#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll res[501]; // luu cac boi so cua cac so tu 1 -> 500
vector<string> ans; // luu cac xau nhi phan 09
string s;
int ok;

void sinh(){
	int i = s.size() - 1;
	while(i >= 0 && s[i] == '9'){
		s[i] = '0';
		i--;
	}
	if(i == -1) ok = false;
	else s[i] = '9';
}

int main(){
	s = string(13, '0');
	ok = 1;
	while(ok){
		ans.push_back(s);
		sinh();
	}
	for(int i=1; i<=500; i++){
		for(string x : ans){
			ll tmp = stoll(x);
			if(tmp && tmp % i == 0){
				res[i] = tmp; break;
			}
		}
	}
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << res[n] << endl;
	}
}
