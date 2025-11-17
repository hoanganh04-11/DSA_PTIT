#include<bits/stdc++.h>
using namespace std;
#define ll long long

int Le(int n){
	int ans = 0;
	while(n){
		ans += n%2;
		n /= 10;
	}
	return ans;
}

bool cmp(int a, int b){
	if(Le(a) != Le(b)) return Le(a) > Le(b);
	else return a < b;
}

int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n, cmp);
	for(int x : a){
		cout << x << " ";
	}
}
