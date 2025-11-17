#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n, d; cin >> n >> d;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	ll ans = 0;
	for(int i=1; i<n; i++){
		if(a[i] <= a[i-1]){
			int kc = a[i-1] - a[i] + 1;
			// can them ? d >= kc
			int r;
			if(kc % d == 0) r = kc / d;
			else r = kc / d  + 1;
			
			ans += r;
			a[i] += (r * d);
		}
	}
	cout << ans;
}
