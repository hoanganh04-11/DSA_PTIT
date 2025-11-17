#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	vector<pair<int, int>> v;
	for(int i=0; i<n; i++){
		int x, y; cin >> x >> y;
		v.push_back({x, 1});
		v.push_back({y, -1});
	}
	sort(v.begin(), v.end());
	int cli = 0, max_val = INT_MIN;
	for(auto x : v){
		cli += x.second;
		max_val = max(max_val, cli);
	}
	cout << max_val << endl;
}
