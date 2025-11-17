#include<bits/stdc++.h>
using namespace std;
#define ll long long

int demNT(int n){
	int ans = 0;
	while(n){
		int r = n % 10;
		if(r==2||r==3||r==5||r==7) ++ans;
		n /= 10;
	}
	return ans;
}

bool cmp(int a, int b){
	if(demNT(a) != demNT(b)) return demNT(a) > demNT(b);
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	stable_sort(a, a+n, cmp);
	for(int x : a){
		cout << x << " ";
	}
}
