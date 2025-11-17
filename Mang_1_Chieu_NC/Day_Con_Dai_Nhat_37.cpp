#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9+7;
int main(){
	int n, k; cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	ll sum = 0;
	int ans = -1;
	map<int, int> mp;
	mp[0] = -1;
	for(int i=0; i<n; i++){
		sum += a[i]; // 0 -> i
		ll x = (sum % k + k) % k;
		if(mp.count(x)){
			// mp[x] + 1 -> i
			ans = max(ans, i - mp[x]);
		}
		else{
			mp[x] = i;
		}
	}
	cout << ans;
}
