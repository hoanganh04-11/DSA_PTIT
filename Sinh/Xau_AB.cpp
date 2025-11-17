#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, X[100], ok;

void ktao(){
	for(int i=1; i<=n; i++){
		X[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && X[i] == 1){
		X[i] = 0;
		--i;
	}
	if(i == 0) ok = false;
	else{
		X[i] = 1;
	}
}


int main(){
	ktao();
	int t; cin >> t;
	while(t--){
		cin >> n;
		ok = true;
		while(ok){
			for(int i=1; i<=n; i++){
				cout << (X[i] ? 'B' : 'A');
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
