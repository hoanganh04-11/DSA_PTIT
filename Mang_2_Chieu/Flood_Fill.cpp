#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9+7;
int a[101][101], n, m;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dem = 0;

void loang(int i, int j, int x){
	a[i][j] = 101;
	++dem;
	for(int k=0; k<8; k++){
		int i1 = dx[k] + i;
		int j1 = dy[k] + j;
		
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == x){
			loang(i1, j1, x);
		}
	}
}

int main(){
	cin >> n >> m;
	set<int> se;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >> a[i][j];
			se.insert(a[i][j]);
		}
	}
	for(int x : se){
		cout << x << " : ";
		multiset<int> dt;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				if(a[i][j] == x){
					dem = 0;
					loang(i, j, x);
					dt.insert(dem);
				}
			}
		}
		for(int y : dt){
			cout << y << " ";
		}
		cout << endl;
	}
}
