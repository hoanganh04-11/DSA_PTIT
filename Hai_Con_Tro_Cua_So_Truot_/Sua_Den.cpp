#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n, k, b; cin >> n >> k >> b;
	int a[100001] = {0};
	for(int i=0; i<b; i++){
		int x; cin >> x;
		a[x] = 1; // cai den o chi so x bi hong
	}
	int cnt = 0;
	for(int i=1; i<=k; i++){
		if(a[i] == 1) ++cnt;
	}
	int ans = cnt;
	for(int i= k + 1; i<=n; i++){
		cnt = cnt - a[i-k] + a[i];
		ans = min(ans, cnt);
	}
	cout << ans << endl;
}
