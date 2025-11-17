#include<bits/stdc++.h>
using namespace std;

int demso(int n){
	if(n == 0) return 1;
	int dem = 0;
	while(n){
		int r = n % 10;
		if(r == 0 || r == 6 || r==8){
			dem++;
		}
		n /=10;
	}
	return dem;
}

bool cmp(int a, int b){
	if(demso(a) != demso(b)) return demso(a) > demso(b);
	else return a < b; 
}

int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n, cmp);
	for(int x : a) cout << x << " ";
}
