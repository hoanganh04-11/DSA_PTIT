#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n, x; cin >> n >> x;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	auto it = upper_bound(a, a+n, x);
	if(it == a+n){
		cout << "NOT FOUND" << endl;
	}
	else{
		--it;
		cout << *it << endl;
	}
}
