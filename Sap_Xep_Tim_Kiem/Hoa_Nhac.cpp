#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m; cin >> n >> m;
	multiset<int>se;
	for(int i=0; i<n; i++){
		int x; cin >> x;
		se.insert(x);
	}
	for(int i=1; i<=m; i++){
		int x; cin >> x;
		// <= x;
		auto it = se.upper_bound(x);
		if(it == se.begin()) cout << -1 << endl;
		else{
			--it;
			cout << *it << endl;
			se.erase(it);
		}
	}
}
