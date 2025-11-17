#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9+7;
int main(){
	// |ai - aj| = k
	// aj = ai + k
	// aj = ai + k
	int n, k; cin >> n >> k;
	int a[n];
	map<int, int> mp;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int ans = -1;
	for(int i=0; i<n; i++){
		int x = a[i] - k;
		int y = a[i] + k;
		
		if(mp.count(x)){
			ans = max(ans, i - mp[x]);
		}
		if(mp.count(y)){
			ans = max(ans, i - mp[y]);
		}
		
		if(!mp.count(a[i])) mp[a[i]] = i;
	}
	cout << ans;
}
