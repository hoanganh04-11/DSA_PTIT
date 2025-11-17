#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9+7;

ll binpow(ll a, ll b, ll c){
	if(b == 0) return 1;
	ll X = binpow(a, b/2, c);
	if(b%2==0) return (X%c) * (X%c) % c;
	else return (X%c) * (X%c) * (a%c) % c; 
}

//ll powMOD(ll a, ll b, ll c){
//	int res = 1;
//	while(b){
//		if(b%2){
//			res *= a;
//			res %= c;
//		}
//		a *= a;
//		a %= c;
//		b /= 2;
//	}
//	return res;
//}

int main(){
	string n;
	ll m;
	cin >> n >> m;
	ll r = 0;
	for(char x : n){
		r = r * 10 + (x - '0');
		r %= MOD;
	}
	cout << binpow(r, m, MOD);
}
