#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int cnt = 0;
	for(int i=0; i<n; i++){
		int chan = 0, le = 0;
		for(int j=i; j<n; j++){
			if(a[j] % 2 == 0) ++chan;
			else ++le;
			if(chan == le) ++cnt;
		}
	}
	cout << cnt; 
}
