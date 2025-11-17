#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(string s){
	int l = 0, r = s.size()-1;
	while(l <= r){
		if(s[l] != s[r]) return false;
		++l; 
		--r;
	}
	for(char x : s){
		if(x == '6') return true;
	}
	return false;
}


int main(){
	string s; cin >> s;
	if(check(s)) cout << "YES";
	else cout << "NO";
}
