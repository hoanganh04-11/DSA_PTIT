#include<bits/stdc++.h>
using namespace std;
int main(){
	map<string, int> mp;
	for(int i=0; i<10; i++){
		string x; cin >> x;
		int ntk; cin >> ntk;
		mp[x] = ntk;
	}
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		vector<string> nt;
		vector<int> cs;
		string digit = "", alpha = "";
		for(char x : s){
			if(isalpha(x)){
				if(digit != "") cs.push_back(stoi(digit));
				alpha += x;
				digit = "";
			}
			else{
				if(alpha != "") nt.push_back(alpha);
				digit += x;
				alpha = "";
			}
		}
		if(digit != "") cs.push_back(stoi(digit));
		long long sum = 0;
		for(int i=0; i<cs.size(); i++){
			sum += mp[nt[i]] * cs[i];
		}
		cout << sum << endl;
	}
}
