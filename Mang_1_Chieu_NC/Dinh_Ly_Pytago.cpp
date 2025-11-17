#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll a[], int l, int r, ll c){
	while(l <= r){
		if(a[l] + a[r] == c) return true;
		else if(a[l] + a[r] > c) r--;
		else l++;
	}
	return false;
}


int main(){
	int n; cin >> n;
	ll a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
		a[i] *= a[i];
	}
	sort(a, a+n);
	for(int i=n-1; i>=0; i--){
		if(check(a, 0, n-1, a[i])){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}
