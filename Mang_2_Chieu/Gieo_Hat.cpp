#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9 + 7;

int main(){
	int n, m, t; cin >> n >> m >> t;
	int i = MOD, j = MOD;
	while(t--){
		int x, y; cin >> x >> y;
		i = min(x, i);
		j = min(y, j);
	}
	cout << 1ll * i * j << endl;
	cou
}
