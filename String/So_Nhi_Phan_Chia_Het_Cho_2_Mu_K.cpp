#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(string s, int k){
	int dem = 0;
	for(int i=s.size()-1; i>=0; i--){
		if(s[i] == '0') ++dem;
		else break; 
	}
	return dem >= k;
}


int main(){
	string s; cin >> s;
	int k; cin >> k;
	if(check(s, k)){
		cout << "YES";
	}
	else cout << "NO";
}
