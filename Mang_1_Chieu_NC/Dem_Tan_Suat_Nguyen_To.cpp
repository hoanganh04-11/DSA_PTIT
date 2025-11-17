#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool prime(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return n>1;
}

int main(){
	int n;
	map<int, int> mp;
	vector<int> v;
	while(cin >> n){
		if(prime(n)){
			v.push_back(n);
			mp[n]++;
		}
	}
	for(int x : v){
		if(mp[x] != 0){
			cout << x << " " << mp[x] << endl;
			mp[x] = 0;
		}
	}
}
