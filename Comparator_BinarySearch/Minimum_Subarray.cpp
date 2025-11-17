#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k; cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	long long sum = 0;
	int l = 0, ans = 1e9+7;
	for(int i=0; i<n; i++){
		// l -> i
		sum += a[i];
		while(sum >= k){
			if(sum == k){
				ans = min(i - l + 1, ans);
			}
			sum -= a[l];
			++l;
		}
	}
	if(ans == 1e9+7){
		cout << -1;
		return 0;
	}
	cout << ans;
}
