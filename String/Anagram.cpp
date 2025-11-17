#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s, a; 
		cin >> s >> a;
		sort(s.begin(), s.end());
		sort(a.begin(), a.end());
		if(a == s) cout << "YES" <<endl;
		else cout << "NO" << endl;
	}
}
