#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	string n; 
	ll m;
	ll r = 0;
	cin >> n >> m;
	for(char x : n){
		r = r * 10 + (x - '0');
		r %= m;
	}
	
	cout << __gcd(m, r) << endl;
}
