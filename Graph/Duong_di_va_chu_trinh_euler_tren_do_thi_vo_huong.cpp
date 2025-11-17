#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
bool visited[1001];

void nhap(){
	memset(visited, false, sizeof(visited));
	for(auto &v : adj) v.clear(); 
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

void dfs(int u){
	visited[u] = true;
	for(auto v : adj[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}

int tplt(){
	int cnt = 0;
	for(int i = 1; i<=n; i++){
		if(!visited[i]){
			++cnt;
			dfs(i);
		}
	}
	return cnt;
}

int check(){
	if(tplt() > 1) return 0;
	int le = 0;
	for(int i = 1; i<=n; i++){
		if(adj[i].size() % 2 == 1) le++;
	}
	if(le == 0) return 2;
	else if (le <= 2) return 1;
	return 0;
}

int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		cout << check() << endl;
	}
}
