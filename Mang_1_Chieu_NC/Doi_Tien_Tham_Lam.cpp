#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	ll n; cin >> n;
	ll ans = 0;
	for(int i=0; i<10; i++){
		ans += n / a[i];
		n %= a[i];
	}
	cout << ans;
}
