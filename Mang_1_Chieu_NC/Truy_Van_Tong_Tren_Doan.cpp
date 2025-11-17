#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n; cin >> n;
	int F[n+1]; F[0] = 0;
	for(int i=1; i<=n; i++){
		int x; cin >> x;
		if(i==1) F[i] = x;
		else F[i] = F[i-1] + x;
	}
	int q; cin >> q;
	while(q--){
		int l, r; cin >> l >> r;
		cout << F[r] - F[l-1] << " ";
	}
}
