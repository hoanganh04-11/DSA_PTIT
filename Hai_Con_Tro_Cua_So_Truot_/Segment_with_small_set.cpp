#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n, k; cin >> n >> k;
	int a[n];
	for(int &x : a) cin >> x;
	int dem[100001] = {0};
	int cnt = 0; //dem so luong phan tu khac nhau trong segment
	ll ans = 0;
	int l = 0, r;
	for(r = 0; r < n; r++){
		dem[a[r]]++;
		if(dem[a[r]] == 1) ++cnt;
		while(cnt > k){
			if(dem[a[l]] == 1) --cnt;
			dem[a[l]]--; ++l;
		}
		//cnt <= k
		ans += r - l + 1;
	}
	cout << ans << endl;
}
