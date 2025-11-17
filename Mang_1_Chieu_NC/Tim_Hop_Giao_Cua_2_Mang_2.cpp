#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m; cin >> n >> m;
	int a[n], b[m];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<m; i++){
		cin >> b[i];
	}
	int i = 0, j = 0;
	vector<int> giao, hop;
	while(i < n && j < m){
		if(a[i] == b[j]){
			giao.push_back(a[i]);
			hop.push_back(a[i]);
			++i; ++j;
		}
		else if(a[i] > b[i]){
			hop.push_back(b[j++]);
		}
		else{
			hop.push_back(a[i++]);
		}
	}
	while(i < n) hop.push_back(a[i++]);
	while(j < m) hop.push_back(b[j++]);
	for(int x : hop) cout << x << " ";
	cout << endl;
	for(int x : giao) cout << x << " ";
}
