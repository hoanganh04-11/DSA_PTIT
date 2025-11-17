#include<bits/stdc++.h>
using namespace std;
int X;
int Abs(int a){
	return abs(a-X);
}

bool cmp(int x, int y){
	if(Abs(x) != Abs(y)) return Abs(x) < Abs(y);
	return x < y;
}

bool cmp2(int x, int y){
	int r1 = x%2, r2 = y%2;
	if(r1 == 0 && r2 == 0) return x < y;
	if(r1 == 1 && r2 == 1) return x > y;
	if(r1 == 0 && r2 == 1) return true;
	else return false;
}


int main(){
	int n; cin >> n >> X;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n, cmp);
	for(int x : a) cout << x << " ";
	cout << endl;
	sort(a, a+n, cmp2);
	for(int x : a) cout << x << " ";
}
