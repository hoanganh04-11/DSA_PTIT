#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n]; 
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	int q; cin >> q;
	while(q--){
		int l, r; cin >> l >> r;
		auto it = lower_bound(a, a+n, l);
		auto it1 = upper_bound(a, a+n, r);
		--it1;
		cout << it1 - it + 1 << endl;
	}
}
