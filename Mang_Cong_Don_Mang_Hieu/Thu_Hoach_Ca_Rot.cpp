#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9+7;

int a[1005][1005];
int n, m;
ll prefix[1005][1005];

int main(){
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >> a[i][j];
		}
	}
	//xay dung prefix
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + a[i][j];
		}
	}
	int q; cin >> q;
	while(q--){
		int h1, h2, c1, c2;
		cin >> h1 >> h2 >> c1 >> c2;
		cout << prefix[h2][c2] - prefix[h1-1][c2] - prefix[h2][c1-1] + prefix[h1-1][c1-1] << endl;
	}
}
