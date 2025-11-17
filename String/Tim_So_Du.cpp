#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	string n; cin >> n;
	ll du = 0;
	for(char x : n){
		du = du * 10 + (x - '0');
		du %= 4;
	}
	if(du == 0) cout << 4 << endl;
	else cout << 0 << endl;
}
