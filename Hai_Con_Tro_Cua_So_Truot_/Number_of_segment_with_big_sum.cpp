#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n, s; cin >> n >> s;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	ll sum = 0, ans = 0;
	int l = 0, r;
	for(r = 0; r < n; r++){
		sum += a[r];
		while(sum >= s){
			ans += n - r;
			sum -= a[l++];
		}
	}
	cout << ans; 
}
