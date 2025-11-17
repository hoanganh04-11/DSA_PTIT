#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9+7;

int n, q, a[1000005];
ll D[1000005];
ll F[1000005];

int main(){
	cin >> n >> q;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	while(q--){
		int l, r; cin >> l >> r;
		// truy van cac phan tu tu l toi r
		--l, --r;
		D[l] += 1;
		D[r+1] -= 1;
	}
	for(int i=0; i<n; i++){
		if(i == 0) F[i] = D[i];
		else F[i] = F[i-1] + D[i];
	}
	sort(F, F+n);
	sort(a, a+n);
	ll tong = 0;
	for(int i=0; i<n; i++){
		tong += (1ll * a[i] * F[i]);
	}
	cout << tong;
}
