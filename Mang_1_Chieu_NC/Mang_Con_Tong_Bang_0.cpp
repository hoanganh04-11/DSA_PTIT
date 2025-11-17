#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9+7;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	ll sum = 0; //tong 0 -> i
	map<int, int> mp;
	mp[0] = 1;
	for(int i=0; i<n; i++){
		sum += a[i];
		if(mp.count(sum)){
			cout << 1; 
			return 0;
		}
		mp[sum] = 1;
	}
	cout << -1;
}
