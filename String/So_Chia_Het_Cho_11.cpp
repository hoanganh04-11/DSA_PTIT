#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	string s; cin >> s;
//	int r = 0;
//	for(char x : s){
//		r = r * 10 + (x - '0');
//		r %= 11;
//	}
//	if(r == 0) cout << "YES";
//	else cout << "NO";
	int c = 0, l = 0;
	for(int i=0; i<s.size(); i++){
		if(i % 2 == 0) c += s[i] - '0';
		else l += s[i] - '0';
	}
	int r = abs(c-l);
	if(r % 11 == 0) cout << "YES";
	else cout << "NO";
} 
