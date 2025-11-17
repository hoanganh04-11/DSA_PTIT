#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	multiset<int> se1;
	multiset<int> se2;
	for(int i=0; i<n; i++){
		cin >> a[i];
		if(a[i] % 2 != 0) se1.insert(a[i]);
		else se2.insert(a[i]);
	}
	for(auto it = se1.rbegin(); it != se1.rend(); it++){
		cout << *it << " ";
	}
	for(auto x : se2){
		cout << x << " ";
	}
}
