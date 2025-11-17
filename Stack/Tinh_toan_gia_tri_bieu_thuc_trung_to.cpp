#include<bits/stdc++.h>
using namespace std;
#define ll long long

int pre(char c){
	if(c == '(') return 0;
	else if(c == '+' || c == '-') return 1;
	else if(c == '*' || c == '/') return 2;
}

ll tinhtoan(ll a, ll b, char c){
	if(c == '+') return a + b;
	else if(c == '-') return a - b;
	else if(c == '*') return a * b;
	else return a / b;
}

void solve(string s){
	stack<char> st1;
	stack<ll> st2;
	for(int i=0; i<s.size(); i++){
		if(s[i] == '('){
			st1.push(s[i]);
		}
		else if(isdigit(s[i])){
			ll tmp = 0;
			while(i < s.size() && isdigit(s[i])){
				tmp = tmp * 10 + s[i] - '0';
				i++;
			}
			st2.push(tmp);
			--i;
		}
		else if(s[i] == ')'){
			while(!st1.empty() && st1.top() != '('){
				ll o1 = st2.top(); st2.pop();
				ll o2 = st2.top(); st2.pop();
				st2.push(tinhtoan(o2, o1, st1.top()));
				st1.pop();
			}
			st1.pop(); //xoa dau mo ngoac
		}
		// toan tu
		else{
			while(!st1.empty() && pre(st1.top()) >= pre(s[i])){
				ll o1 = st2.top(); st2.pop();
				ll o2 = st2.top(); st2.pop();
				st2.push(tinhtoan(o2, o1, st1.top()));
				st1.pop();
			}
			st1.push(s[i]);
		}
	}
	while(!st1.empty()){
		ll o1 = st2.top(); st2.pop();
		ll o2 = st2.top(); st2.pop();
		st2.push(tinhtoan(o2, o1, st1.top()));
		st1.pop();
	}
	cout << st2.top() << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		solve(s);
	}
}
