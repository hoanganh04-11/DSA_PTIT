#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<int, int> 
#define F first 
#define S second

bool cmp(ii a, ii b){
	if(a.S != b.S) return a.S < b.S;
	return a.F > b.F;
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
