#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9+7;
int main(){
	int n, k; cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int l = 0, ans = -1; // l - i;
		sort(a, a+n);
	// mang con l -> i
	for(int i=0; i<n; i++){
		while(a[i] - a[l] > k){
			++l;
		}
		ans = max(ans, i - l + 1);
	}
	cout << ans;
}

