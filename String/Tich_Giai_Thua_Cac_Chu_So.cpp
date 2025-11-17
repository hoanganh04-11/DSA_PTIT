#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	string res = "";
	for(auto x : a){
		if(x == '4' ) res += "322";
		else if(x == '6') res += "53";
		else if(x == '8') res += "7222";
		else if(x == '9') res += "7332";
		else if(x != '0' && x != '1') res += x;
	}
	sort(res.begin(), res.end(), greater<char>());
	cout << res << endl;
}
