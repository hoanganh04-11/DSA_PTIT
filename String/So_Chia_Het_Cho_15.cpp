#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(string s){
	int n = s[s.size()-1] - '0';
	if(n != 0 && n != 5) return false;
	int tong = 0;
	for(char x : s){
		tong += x - '0';
	}
	return tong % 3 == 0;
}
int main(){
	string s; cin >> s;
	if(check(s)) cout << "YES";
	else cout << "NO";
}
