#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	string n; cin >> n;
	ll m; cin >> m;
	ll r = 0;
	for(int i=0; i<n.size(); i++){
		r = r * 10 + (s[i] - '0');
		r %= m; 
	}
	cout << r;
}
