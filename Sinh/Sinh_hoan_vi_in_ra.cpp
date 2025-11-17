#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, X[100], ok;

void ktao(){
	for(int i=1; i<=n; i++){
		X[i] = i;
	}
}

void sinh(){
	int i = n - 1;
	while(i >= 1 && X[i] > X[i+1]){
		--i;
	}
	if(i == 0) ok = false;
	else{
		int j = n;
		while(X[i] > X[j]) --j; //dich sang trai
		swap(X[i], X[j]);
		reverse(X + i + 1, X + n + 1);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		ktao();
		ok = true;
		while(ok){
			for(int i=1; i<=n ; i++){
				cout << X[i];
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
