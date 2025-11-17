#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9+7;

ll binpow(ll a, ll b, ll c){
	if(b == 0) return 1;
	ll X = binpow(a, b/2, c);
	if(b % 2 == 0){
		return (X%c) * (X%c) % c;
	}
	else{
		return (X%c) * (X%c) * (a%c) % c;
	}
}

int main(){
	cout << binpow(2, 1000000000000000000, 10);
}
