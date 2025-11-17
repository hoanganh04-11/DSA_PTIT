#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, m, i;
vector<int> adj[1001];
bool visited[1001];

void nhap(){
	memset(visited, false, sizeof(visited));
	for(auto &x : adj) x.clear();
	cin >> n >> m;
	while(m--){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

void bfs(int u){
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		int v = q.front(); q.pop();
		for(int x : adj[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}
	}
}

int tplt(){
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			++cnt;
			bfs(i);
		}
	}
	return cnt;
}

int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		cout << tplt();
	}
}
