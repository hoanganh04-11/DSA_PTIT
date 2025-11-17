#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9+7;
bool checkdx(int a[], int n){
	int l = 0, r = n-1;
	while(l <= r){
		if(a[l] == a[r]){
			++l;
			--r;
		}
		else return 0;
	}
	return 1;
}

ll tich1(int a[], int n){
	ll ans = 1;
	for(int i=0; i<n; i++){
		ans *= (a[i]%MOD);
		ans %= MOD;
	}
	return ans;
}

bool prime(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return n>1;
}

int demNT(int a[], int n){
	int ans = 0;
	for(int i=0; i<n; i++){
		if(prime(a[i])) ++ans;
	}
	return ans;
}

int main(){
	int n; cin >> n;
	int a[n], b[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a+n);
	int x = a[n-1];
	auto it = lower_bound(a, a+n, x);
	cout << x << " " << it - a << endl;
	int y = a[0];
	auto it1 = upper_bound(a, a+n, y);
	--it1;
	cout << y << " " << it1 - a << endl;
	ll max_val = LLONG_MIN;
	cout << demNT(a, n) << endl;
	for(int i=1; i<n; i++){
		max_val = max(max_val, 1ll*a[i]*a[i-1]);
	}
	cout << max_val << endl;
	if(checkdx(a, n)) cout << "YES" << endl;
	else cout << "NO" << endl;
	cout << tich1(a, n) << endl;
}
