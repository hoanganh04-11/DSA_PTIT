#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(string s){
	int i = s.size()-1;
	while(i >= 0 && s[i] == '1'){
		s[i] = '0';
		--i;
	}
	if(i != -1) s[i] = '1';
	cout << s << " ";
}


int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		solve(s);
		cout << endl;
	}
}
