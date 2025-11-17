#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n, s; cin >> n >> s;
	int a[n];
	for(int &x : a) cin >> x;
	ll sum = 0, ans = 0;
	int l = 0, r;
	for(int r = 0; r < n; r++){
		sum += a[r];
		while(sum > s){
			sum -= a[l++];
		}
		//dam bao l, r; :sum <= s
		ans += (r-l+1);
	}
	cout << ans;
}
