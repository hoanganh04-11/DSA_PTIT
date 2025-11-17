#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define iii pair<int, pair<int, int>>
#define F first
#define S second

bool cmp(iii a, iii b){
	if(a.F != b.F) return a.F < b.F;
	else if(a.F == b.F) return a.S.F < b.S.F;
	else return a.S.S < b.S.S;
}

int main(){
	int n; cin >> n;
	vector<pair<int, pair<int, int>>> v;
	for(int i=0; i<n; i++){
		pair<int, pair<int, int>> p;
		cin >> p.F >> p.S.F >> p.S.S;
		v.push_back(p);
	} 
	sort(v.begin(), v.end(), cmp);
	for(iii x : v){
		cout << x.F << " " << x.S.F << " " << x.S.S << endl;
	}
}
