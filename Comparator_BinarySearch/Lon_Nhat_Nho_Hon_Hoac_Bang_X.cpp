#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int x; cin >> x;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	auto it = upper_bound(a, a+n, x);
	if(it != a){
		--it;
		cout << *it << endl;
	} 
	else cout << "NOT FOUND" << endl;
}
