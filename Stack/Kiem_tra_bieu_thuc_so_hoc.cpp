#include<bits/stdc++.h>
using namespace std;
#define ll long long

//th1: dau dong ngoac nhung dinh la mo ngoac => khong co cac toan tu o giua nen sai
//th2: co dau dong ngoac nhu ko co mo ngoac => sai
//th3: co dau dong ngoac co dau mo ngoac co toan tu o giua thi pop hoac mo ngoac khoi stack

bool check(string s){
	stack<char> st;
	for(auto x : s){
		if(x != ')' && x != ' ') st.push(x);
		else if(x == ')'){
			if(st.empty() ) return true;
			int cnt = 0;
			while(!st.empty() && st.top() != '('){
				cnt ++;
				st.pop();
			} 
			if (st.empty() || cnt <= 1) return true;
			st.pop();
		}
	}
	return false;
}

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; getline(cin ,s);
		if(check(s)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
