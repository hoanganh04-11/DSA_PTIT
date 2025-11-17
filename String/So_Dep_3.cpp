#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool tang(string s){
	for(int i = 1; i<s.size(); i++){
		if(s[i] < s[i-1]) return false;
	}
	return true;
}

bool giam(string s){
	for(int i=1; i<s.size(); i++){
		if(s[i] > s[i-1]) return false;
	}
	return true;
}

int main(){
	string s; cin >> s;
	if(tang(s) || giam(s)) cout << "YES\n";
	else cout <<"NO\n";
}
