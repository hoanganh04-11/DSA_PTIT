#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, X[100], ok;

void ktao(){
	for(int i=1; i<=k; i++){
		X[i] = i;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && X[i] == n - k + i){
		--i;
	}
	if(i==0) ok = false;
	else{
		X[i]++;
		for(int j = i + 1; j <= k; j++){
			X[j] = X[j-1] + 1;
		}
	}
}



int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		ktao();
		ok = true;
		while(ok){
			for(int i=1; i<=k; i++){
				cout << X[i];
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
