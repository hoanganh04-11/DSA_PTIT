#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9+7;
int a[101][101], n, m;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int i_max = 0, i_min = MOD, j_max = 0, j_min = MOD, dem = 0;

void capNhat(int i, int j){
	a[i][j] = 0;
	
	i_max = max(i_max, i);
	i_min = min(i_min, i);
	
	j_max = max(j_max, j);
	j_min = min(j_min, j);
}

void loang(int i, int j){
	capNhat(i, j);
	++dem;
	
	for(int k=0; k<8; k++){
		int i1 = dx[k] + i;
		int j1 = dy[k] + j;
		
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1]){
			loang(i1, j1);
		}
	}
}

int main(){
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >> a[i][j];
		}
	}
	int ans = 0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(a[i][j]){
				i_max = 0, i_min = MOD, j_max = 0, j_min = MOD, dem = 0;
				loang(i, j);
				int dai = j_max - j_min + 1;
				int rong = i_max - i_min + 1;
				
				if(dai * rong == dem) ++ans;
			}
		}
	}
	cout << ans;
}
