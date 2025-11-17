#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n, k; cin >> n >> k;
	int a[n];
	for(int &x : a) cin >> x;
	multiset<ll> ms;
	ll ans = 0;
	int l = 0, r;
	for(int r = 0; r < n; r++){
		ms.insert(a[r]);
		while(*ms.rbegin() - *ms.begin() > k){
			auto it = ms.find(a[l]);
			ms.erase(it);
			++l;
		}
		//
		ans += r - l + 1;
	}
	cout << ans;
}
