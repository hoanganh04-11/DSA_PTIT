#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	map<int, int> mp;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
		mp[a[i]]++;
		if(mp[a[i]] == 2){
			cout << a[i];
			return 0;
		}
	}
	cout << -1 << endl;
}
