#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		map<char, int> mp;
		for(char x : s){
			mp[x]++;
		}
		int ans = 0;
		for(auto x : mp){
			if(x.second % 2 == 1) ++ans;
		}
		if(ans <= 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
