#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, x; cin >> n >> x;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	auto it = lower_bound(a, a+n, x);
	if(it == a+n) cout << -1 << endl;
	else cout << it - a << endl;
	auto it1 = upper_bound(a, a+n, x);
	if(it1 == a+n) cout << -1 << endl;
	else cout << it1 - a << endl;
	if(*it == x) cout << it - a << endl;
	else cout << -1 << endl;
	--it1;
	if(*it1 == x) cout << it1 - a << endl;
	else cout << -1 << endl;
	cout << it1 - it + 1 << endl;
}
