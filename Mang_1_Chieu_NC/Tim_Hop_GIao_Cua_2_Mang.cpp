#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m; cin >> n >> m;
	int a[n], b[m];
	set<int> se1;
	set<int> se2;
	for(int i=0; i<n; i++){
		cin >> a[i];
		se1.insert(a[i]);
		se2.insert(a[i]);
	}
	for(int i=0; i<m; i++){
		cin >> b[i];
		se2.insert(b[i]);
	}
	for(int i=0; i<m; i++){
		if(se1.count(b[i])){
			cout << b[i] << " ";
			se1.erase(b[i]);
		}
	}
	cout << endl;
	for(int x : se2){
		cout << x << " ";
	}
}
