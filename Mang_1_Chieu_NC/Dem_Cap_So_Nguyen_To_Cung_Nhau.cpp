#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	while(b){
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int main(){
	int n; cin >> n;
	int a[n];
	int dem = 0;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		for(int j = i+1; j<n; j++){
			if(gcd(a[i], a[j]) == 1) ++dem;
		}
	}
	cout << dem << endl;
}
