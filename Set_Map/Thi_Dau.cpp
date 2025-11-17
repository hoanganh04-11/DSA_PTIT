#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;

	map<string, vector<string>> mp;
	cin.ignore();
	while(n--){
		string s;
		getline(cin, s);
		
		//tach 2 doi A, B
		string A, B;
		int m = 0;
		while(s[m] != '-'){
			A += s[m];
			++m;
		}
		A.pop_back();
		
		m += 2;
		while(m < (int) s.size()){
			B += s[m];
			++m;
		}
		mp[A].push_back(B);
		mp[B].push_back(A);
	}
	for(auto& [x, Ox] : mp){
		cout << x << " : ";
		sort(Ox.begin(), Ox.end());
		for(int i = 0; i< (int) Ox.size() - 1; i++){
			cout << Ox[i] << ", ";
		}
		cout << Ox.back() << endl;
	}
}
