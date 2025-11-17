#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<int, int>
#define F first
#define S second

bool cmp(ii a, ii b){
	int res1 = abs(a.F-a.S);
	int res2 = abs(b.F-b.S);
	if(res1 != res2) return res1 < res2;
	else if(res1 == res2) return a.F < b.F;
	else if(a.F == b.F) return a.S > b.S;
}

int main(){
	int n; cin >> n;
	vector<pair<int, int>> v;
	for(int i=0; i<n; i++){
		pair<int, int> p;
		cin >> p.F >> p.S;
		v.push_back(p);
	}
	sort(v.begin(), v.end(), cmp);
	for(ii x : v){
		cout << x.F << " " << x.S << endl;
	}
}
