#include<bits/stdc++.h>
using namespace std;
#define ll long long

void sang(ll l, ll r){
	int prime[r-l+1];
	for(ll i=0; i<=r-l; i++){
		prime[i] = 1;
	}
	for(ll i=2; i<=sqrt(r); i++){
		for(ll j=max(i*i, (l+i-1)/i*i); j <= r; j+=i){
			prime[j-l] = 0;
		}
	}
	for(ll i = max(2ll, l); i<=r; i++){
		if(prime[i-l]){
			cout << i << " ";
		}
	}
}
int main(){
	int l, r; cin >> l >> r;
	sang(l, r);
}
