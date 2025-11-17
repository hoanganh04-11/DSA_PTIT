#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f(int a[], int n, int k, ll time){
	ll ans = 0;
	for(int i=0; i<n; i++){
		ans += time / a[i];
		if(ans >= k) break;
	}
	return ans;
}

int main(){
	int n, k; cin >> n >> k;
	int a[n];
	int min_val = INT_MAX;
	for(int i=0; i<n; i++){
		cin >> a[i];
		min_val = min(min_val, a[i]);
	}
	ll left = 0, right = 1ll * k * min_val; //1e18
	ll ans = -1;
	while(left <= right){
		ll mid = (left + right) / 2;
		cout << mid << endl;
		if(f(a, n, k, mid) >= k){
			ans = mid;
			right = mid - 1;
		}
		else{
			left = mid + 1;
		}
	}
	cout << ans << endl;
}
