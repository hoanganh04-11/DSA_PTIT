#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, X[100], ok, ans = 0;

void ktao(){
	for(int i=1; i<=n; i++){
		X[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 0 && X[i] == 1){
		X[i] = 0;
		--i;
	}
	if(i == 0) ok = false;
	else{
		X[i] = 1;
	}
}

bool check(){
	int cnt = 0, len = 0; // cnt: so luong doan lien tiep 0 co do dai k
	// len: theo doi do dai cua doan 0 lien tiep hien tai dang duoc xet
	for(int i=1; i<=n; i++){
		if(X[i] == 0){
			++len;
		}
		else{
			if(len > k) return false;
			else if(len == k) ++cnt;
			len = 0;
		}
	}
	if(X[n] == 0){
		if(len > k) return false;
		else if(len == k) ++cnt;
	}
	return cnt == 1;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		ktao();
		ok = true;
		vector<string> res;
		while(ok){
			if(check()){
				++ans;
				string tmp = "";
				for(int i=1; i<=n; i++){
					if(X[i]) tmp += "B";
					else tmp += "A";
				}
				res.push_back(tmp);	
			}
			sinh();		
		}
		cout << ans << endl;
		for(string x : res){
			cout << x << endl;
		}
	}
}
