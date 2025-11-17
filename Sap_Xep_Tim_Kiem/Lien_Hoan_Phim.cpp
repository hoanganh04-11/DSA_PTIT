#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}


int main(){
	int n; cin >> n;
	vector<pair<int, int>> v;
	for(int i=0; i<n; i++){
		int x, y; cin >> x >> y;
		v.push_back({x, y});
	}
	sort(v.begin(), v.end(), cmp);
	ll ans = 1;
	int res = v[0].second;
	for(int i=1; i<v.size(); i++){
		if(v[i].first >= res){
			++ans;
			res = v[i].second;
		}
	}
	cout << ans << endl; 	
}
