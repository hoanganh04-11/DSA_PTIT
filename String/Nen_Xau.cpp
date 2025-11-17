#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin >> s;
	s += "@";
	int cnt = 1;
	for(int i=1; i<s.size(); i++){
		if(s[i] == s[i-1]){
			++cnt;
		}
		else{
			cout << s[i-1] << cnt;
			cnt = 1;
		}
	}
}
