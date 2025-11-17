#include<bits/stdc++.h>
using namespace std;
#define ll long long

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
	int n; cin >> n;
	int a[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}	
	ll res = 0;
	for(int i=1; i<n-1; i++){
		for(int j=1; j<n-1; j++){
			//a[i][j]: trung tam
			ll tong = a[i][j];
			for(int k=0; k<8; k++){
				int i1 = i + dx[k], j1 = j + dy[k];
				tong += a[i1][j1];
			}
			res = max(res, tong);
		}
	}
	cout << res;
}
