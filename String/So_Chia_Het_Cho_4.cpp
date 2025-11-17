#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(string s){
	if(s.size() == 1){
		return s == "0" || s == "4" || s == "8";
	}
	int n = (s[s.size() - 2] - '0') * 10 + s[s.size() - 1] - '0';
	return n % 4 == 0; 
}
int main(){
	string s; cin >> s;
	if(check(s)) cout << "YES";
	else cout << "NO";
}
