#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return n > 1;
}

int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int cnt = 0;
	for(int i=0; i<n; i++){
		long long sum = 0;
		for(int j = i; j<n; j++){
			sum += a[j];
			if(prime(sum)) ++cnt;
		}
	}
	cout << cnt << endl;
}
