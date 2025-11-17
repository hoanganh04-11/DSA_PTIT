#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9+7;

int n, q, a[1000001];
ll F[1000001];

int main(){
	cin >> n >> q;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	//Xay dung mang F[]
	for(int i=0; i<n; i++){
		if(i == 0) F[i] = a[i];
		else F[i]= F[i-1] + a[i];
	}
	while(q--){
		int l, r; cin >> l >> r;
		if(l == 0) cout << F[r] << endl;
		else cout << F[r] - F[l-1] << endl;
	}
}
