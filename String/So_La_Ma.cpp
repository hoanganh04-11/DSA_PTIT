#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t; cin >> t;
	map<char, int> mp {
		{'I', 1}, 
		{'V', 5},
		{'X', 10},
		{'L', 50},
		{'C', 100}, 
		{'D', 500},
		{'M', 1000}
	};
	while(t--){
		string s; cin >> s;
		ll sum = mp[s[s.size()-1]];
		for(int i=s.size()-2; i>=0; i--){
			if(mp[s[i]] >= mp[s[i+1]]) sum += mp[s[i]];
			else sum -= mp[s[i]];
		}	
		cout << sum << endl;
	}
}
