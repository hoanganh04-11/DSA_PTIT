#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n, s; cin >> n >> s;
	pair<int, int> a[n];
	for(int i=0; i<n; i++){
		cin >> a[i].first >> a[i].second;
	}
	sort(a, a+n);
	for(int i=0; i<n;i++){
		if(s > a[i].first) s+= a[i].second;
		else{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES" << endl;
}
