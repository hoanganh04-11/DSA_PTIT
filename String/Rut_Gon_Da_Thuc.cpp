#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string x; 
		map<int, int> mp;
		while(ss >> x){
			if(x == "+") continue;
			int hs = 0, sm = 0, i = 0;
			while(x[i] != "x"){
				hs = hs * 10 + (x[i] - '0');
				i++;
			} 
			i += 2;
			while(i < x.size()){
				sm = sm  * 10 + (x[i] - '0');
				i++;
			}
			mp[sm] += hs;
		}
		int cnt = 0;
		for(auto x : mp){
			++cnt;
			cout << x.second << "x^" << x.first;
			if(cnt != mp.size()) cout << " + ";
		}
		cout << endl;
	}
}
