#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(string s){
	int n = s.back() - '0'; // s[s.size()-1]
	if(n % 2 == 1) return false;
	int tong = 0;
	for(char x : s){
		tong += x - '0';
	}
	return tong % 3 == 0;
}

int main(){
	string s; cin >> s;
	if(check(s)) cout << "YES\n";
	else cout << "NO\n";
}
