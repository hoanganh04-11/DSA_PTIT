#include<bits/stdc++.h>
using namespace std;

int demC(int n){
	int ans = 0;
	while(n){
		ans += 1 - n%2;
		n /= 10;
	}
	return ans;
}
int demL(int n){
	int ans1 = 0;
	while(n){
		ans1 += n%2;
		n /= 10;
	}
	return ans1;
}

bool cmp(int x, int y){
	if(demC(x) != demC(y)) return demC(x) < demC(y);
	else return x < y;
}

bool cmp1(int x, int y){
	return demL(x) < demL(y);
}

int main(){
	int n; cin >> n;
	int a[n], b[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a+n, cmp);
	for(auto x : a){
		cout << x << " ";
	}
	cout << endl;
	stable_sort(b, b+n, cmp1);
	for(auto x : b){
		cout << x << " ";
	}
}
