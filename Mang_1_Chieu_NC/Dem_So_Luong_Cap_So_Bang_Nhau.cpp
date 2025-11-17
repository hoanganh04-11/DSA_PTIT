#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n; cin >> n;
	int a[n];
	map<int, int> mp; 
	for(int i=0; i<n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	ll ans = 0;
	for(auto x : mp){
		ans += (1ll*x.second * (x.second-1)/2);
	}
	cout << ans;
}
