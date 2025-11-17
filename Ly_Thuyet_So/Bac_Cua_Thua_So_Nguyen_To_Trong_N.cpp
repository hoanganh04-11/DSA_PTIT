#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9+7;

ll bac(ll n, ll p){
	ll ans = 0;
	for(ll i=p; i<=n; i*=p){
		ans += n/i;
	}
	return ans;
}

int main(){
	ll n, p; cin >> n >> p;
	cout << bac(n, p);
}
