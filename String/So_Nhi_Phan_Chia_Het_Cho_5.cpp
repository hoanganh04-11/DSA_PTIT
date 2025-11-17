#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	string s; cin >> s;
	ll n = 0, lt = 1;
	for(int i=s.size()-1; i>=0; i--){
		n = n + (s[i] - '0') * lt;
		n %= 5;
		lt *= 2;
		lt %= 5;
	}
	if(n == 0) cout << "YES";
	else cout << "NO";
} 
