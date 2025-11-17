#include<bits/stdc++.h>
using namespace std;

map<int, int> mp;

bool check(int n){
	while(n >= 10){
		if((n/10 % 10) > (n % 10)) return false;
		n /= 10;
	}
	return true;
}

bool cmp(int a, int b){
	if(mp[a] != mp[b]) return mp[a] > mp[b];
	return a < b;
}

int main(){
	int n;
	vector<int> v;
	while(cin >> n){
		if(check(n)){
			v.push_back(n);
			mp[n]++;
		}
	}
	sort(v.begin(), v.end(), cmp);
	for(int x : v){
		if(mp[x] != 0){
			cout << x << " " << mp[x] << endl;
			mp[x] = 0;
		}
	}
}
