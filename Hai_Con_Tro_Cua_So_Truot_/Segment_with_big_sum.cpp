#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n, s; cin >> n >> s;
	int a[n];
	for(int &x : a) cin >> x;
	ll ans = 0;
	int l = 0, r;
	for(int r = 0; r < n; r++){
		sum += a[r];
		while(sum >= s){
			ans = min(ans, r-l+1);
			sum -= a[l];
			l++;
		}
	}
	if(ans == INT_MAX) cout << -1 << endl;
	else cout << ans;
}
