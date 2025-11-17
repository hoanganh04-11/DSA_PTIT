#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	string s; cin >> s;
	while(s.size() > 0 && s.find("111") != string::npos){
		int p = s.find("111");
		s.erase(p, 3);
	}
	if(s.size() == 0) cout << "EMPTY";
	else cout << s;
}
