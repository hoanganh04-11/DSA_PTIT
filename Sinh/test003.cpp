#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, X[100], ok;

void ktao(){
	for(int i=1; i<=n; i++){
		X[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && X[i]==1){
		X[i] = 0;
		--i;
	}
	if(i==0){
		ok = false;
	}
	else{
		X[i] = 1;
	}
}

bool check(){
	int cnt = 0;
	for(int i=1; i<=n; i++){
		cnt += X[i];
	}
	return cnt == k;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		ktao();
		ok = true;
		while(ok){
			if(check()){
				for(int i=1; i<=n; i++){
					cout << X[i];
				}
				cout << endl;
			}
			sinh();
		}
	}	
}
