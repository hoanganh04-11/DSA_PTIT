#include<bits/stdc++.h>
using namespace std;
#define ll long long

string array_to_string(char a[], int n){
	string res = "";
	for(int i=0; i<n; i++){
		res += a[i];
	}
	return res;
}


int main(){
	string s;
	cin >> s;
	string res = "";
	for(int i=0; i<s.size(); i++){
		if(isdigit(s[i])) res += s[i];
	}
	ll sum = 0;
	for(char x : res){
		sum += x - '0';
	}
	cout << sum
}
