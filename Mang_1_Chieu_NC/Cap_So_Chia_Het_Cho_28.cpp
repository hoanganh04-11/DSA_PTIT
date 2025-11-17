#include<bits/stdc++.h>
using namespace std;
#define ll long long
int t[28];
int main(){
	int n; cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
		arr[i] %= 28;
	}
	ll ans = 0;
	for(int i=0; i<n; i++){
		int a = arr[i];
		if(a != 0){
			int b = 28 - a;
			ans += t[b];
		}
		else{
			ans += t[0];
		}
		t[arr[i]]++;
	}
	cout << ans;
}
