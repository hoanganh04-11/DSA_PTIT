#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	stack<int> st;
	int n; cin >> n;
	while(n){
		st.push(n % 2);
		n/= 2;
	}
	while(!st.empty()){
		cout << st.top();
		st.pop();
	}
}
