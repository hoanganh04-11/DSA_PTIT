#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	string s; cin >> s;
		stack<char> st;
		for(char c : s){
			if(c == '(') st.push('(');
			else{
				if(st.empty()){
					cout << "NO" << endl;
					return 0;
				}
				st.pop();
			}
		}
		if(st.empty()) cout << "YES" << endl;
		else cout << "NO" << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
