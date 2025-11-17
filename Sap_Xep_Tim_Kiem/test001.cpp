#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9;

int first_pos(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int m = (r + l) / 2;
		if(a[m] == x){
			res = m;
			r = m - 1;
		}
		else if(a[m] < x ){
			l = m + 1;
		}
		else{
			r = m - 1;
		}
	}
	return res;
}

int last_pos(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x){
			res = m;
			l = m + 1;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else{
			r = m - 1;
		}
	}
	return res;
}

int main(){
	int n, k; cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	ll ans = 0;
	for(int i = 0; i<n; i++){
		int y = a[i] + k;
		int p1 = first_pos(a, i+1, n-1, y);
		int p2 = last_pos(a, i+1, n-1, y);
		if(p2 != -1) ans += (p2-p1+1);
	}
	cout << ans;
}
