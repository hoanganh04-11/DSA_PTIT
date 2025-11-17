#include<bits/stdc++.h>
using namespace std;
#define ll long long

int pre(char c){
	if(c == '(') return 0;
	else if(c == '+' || c == '-') return 1;
	else if(c == '*' || c == '/') return 2;
	else if(c == '^') return 3;
}

void solve(string s){
	string res = "";
	stack<char> st;
	for(int i=0; i<s.size(); i++){
		// s[i]
		if(isalpha(s[i])){
			res += s[i];
		}
		else if(s[i] == '('){
			st.push(s[i]);
		}
		else if(s[i] == ')'){
			while(!st.empty() && st.top() != '('){
				res += st.top();
				st.pop();
			}
			st.pop(); //xoa dau mo ngoac
		}
		// + - * / ^ 
		else{
			while(!st.empty() && pre(st.top()) >= pre(s[i])){
				res += st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(!st.empty()){
		res += st.top();
		st.pop();
	}
	cout << res << endl;
}


int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		solve(s);
	}
}
