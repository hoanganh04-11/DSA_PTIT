#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9+7;

int main(){
	int n; cin >> n;
	int a[n];
	map<int, int> mp;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	mp[0] = -1;
	ll sum = 0;
	int index = -1, ans = 0;
	for(int i=0; i<n; i++){
		sum += a[i];
		if(mp.count(sum)){
			// mp[sum] + 1 -> i
			if(i - mp[sum] > ans){
				ans = i - mp[sum];
				index = i;
			}
		}
		else{
			mp[sum] = i;
		}
	}
	if(index == -1) cout << "NOT FOUND";
	else{
		for(int i = index - ans + 1; i<=index; i++){
			cout << a[i] << " ";
		}
	}
}
