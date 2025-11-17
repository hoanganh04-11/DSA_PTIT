#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9 + 7;

int main(){
	int n, m; cin >> n >> m;
	int a[n+1][m+1];
	for(int i=1; i<=n; i++){
		for(int j=1; j<= m; j++){
			cin >> a[i][j];
		}
	}
	ll dp[n+1][m+1];
	memset(dp, 0, sizeof(dp));
	dp[0][1] = 1;
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=m; j++){
			if(a[i][j] == 1){
				dp[i][j] += dp[i-1][j] + dp[i][j-1];
			}
			else{
				dp[i][j] = 0;
			}
		}
	}
	cout << dp[n][m];
}
