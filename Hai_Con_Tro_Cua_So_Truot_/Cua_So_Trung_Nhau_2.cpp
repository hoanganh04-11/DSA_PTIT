#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
	int n, k, t; cin >> n >> k >> t;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	multiset<int> s;
	for(int j=0; j<k; j++){
		// kiem tra xem trong s co phan tu a[i] >= a[j] - t khong?
		auto it = s.lower_bound(a[j] - t);
		if(it != s.end() && (*it <= a[j] + t)){
			return true;
		}
		s.insert(a[j]);
	}
	for(int j=k; j<n; j++){
		s.erase(s.find(a[j - k]));
		auto it = s.lower_bound(a[j] - t);
		if(it != s.end() && (*it <= a[j] + t)){
			return true;
		}
		s.insert(a[j]);
	}
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		if(solve()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
