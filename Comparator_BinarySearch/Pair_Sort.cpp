#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ii pair<int, int>
#define F first
#define S second

bool cmp(pair<int, int> x, pair<int, int> y){
	int kc1 = x.F * x.F + x.S * x.S;
	int kc2 = y.F * y.F + y.S * y.S;
	if(kc1 != kc2) return kc1 < kc2;
	else if(kc1 == kc2) return x.F < y.F;
	else if(x.F != y.F) return x.S < y.S;
}


int main(){
	int n; cin >> n;
	pair<int, int> a[n];
	for(int i=0; i<n; i++){
		cin >> a[i].first >> a[i].second;
	}
	sort(a, a+n, cmp);
	for(ii x : a){
		cout << x.F << " " << x.S << endl;
	}
}
