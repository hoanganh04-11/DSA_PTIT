#include<bits/stdc++.h>
using namespace std;
#define ll long long
// A = 0, H = 1
int n, k, a[1005], ok;

void ktao(){
	for(int i=1; i<=n; i++) a[i] = 0;
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = false;
	else a[i] = 1;
}

bool check(){
	int l = 1, r = n;
	while(l < r){
		if(a[l] != a[r]) return false;
		++l; --r;
	}
	return true;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		ok = true;
		ktao();
		while(ok){
			if(check()){
				for(int i=1; i<=n; i++){
					cout << a[i];
				}
				cout << " ";
			}
			sinh();
		}
		cout << endl;
	}
}
