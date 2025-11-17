#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){
	while(b){
		int du = a % b;
		a = b;
		b = du;
	}
	return a;
}
int main(){
	string a;
	ll x, y;
	cin >> a >> x >> y;
	int n = gcd(x, y);
	for(int i=0; i<n; i++){
		cout << a;
	}
}
