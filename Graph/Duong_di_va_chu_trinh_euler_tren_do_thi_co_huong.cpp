#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, m;
vector<int> adj[1001];
bool visited[1001];

void nhap(){
	memset(visited, false, sizeof(visited));
	for(auto &x : adj) x.clear();
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
	}
}

bool check(){
	int deg1[ n + 1 ] = {0}, deg2[ n + 1 ] = {0};
	for(int i=1; i<=n; i++){
		deg1[ i ] = adj[i].size();
	}
	for(int i=1; i<=n; i++){
		for(auto v : adj[i]){
			deg2[ v ]++;
		}
	}
	for(int i=1; i<=n; i++){
		if(deg1[i] != deg2[i]) return false;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		if(check()) cout << 1 << endl;
		else cout << 0 << endl;
	}
}
