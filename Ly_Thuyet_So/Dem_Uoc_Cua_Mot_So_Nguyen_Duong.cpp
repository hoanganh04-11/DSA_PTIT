#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9+7;

int main(){
	int t; cin >> t;
	ll res = 1;
	while(t--){
		int p, e; cin >> p >> e;
		res *= (e+1)%MOD;
		res %= MOD;
	}
	cout << res;
}
