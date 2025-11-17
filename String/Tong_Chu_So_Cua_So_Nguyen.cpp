#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return n>1;
}

bool check2(string s){
	ll ans = 0;
	for(char x : s){
		if(x != '2' && x != '3' && x != '5' && x != '7'){
			return false;
		}
		ans += x - '0';
	}
	return check(ans);
}

int main(){
	string s; cin >> s;
	if(check2(s)) cout << "YES" << endl;
	else cout << "NO" << endl;
}
