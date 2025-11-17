#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9+7;

int F[1000001];
const int maxn = 1e6 + 1;

bool check(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return n>1;
}

//F[i]: So luong nguyen to tu 0 -> i
void nto(){
	F[0] = 0;
	for(int i=1; i<maxn; i++){
		if(check(i)){
			F[i] = F[i-1] + 1;
		}
		else{
			F[i] = F[i-1];
		}
	}
}

int main(){
	int q; cin >> q;
	nto();
	while(q--){
		int l, r; cin >> l >> r;
		cout << F[r] - F[l-1] << endl;
	}
}
