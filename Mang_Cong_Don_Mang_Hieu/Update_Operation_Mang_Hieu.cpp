#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9+7;

int n, q, a[1000005];
ll D[1000005];


int main(){
	cin >> n >> q;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		if(i == 0) D[0] = a[i];
		else D[i] = a[i] - a[i-1];
	}
	while(q--){
		int l, r, k;
		cin >> l >> r >> k;
		D[l] += k;
		D[r+1] -= k;
	}
	ll tong = 0;
	for(int i=0; i<n; i++){
		tong += d[i];
		cout << tong << " ";
	}
}
