#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	string s; cin >> s;
	int tong = 0;
	for(char x : s){
		tong += x - '0';
	}
	if(tong % 9 == 0) cout << "YES";
	else cout << "NO";
}
