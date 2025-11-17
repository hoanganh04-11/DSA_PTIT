#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		ll sum = 0;
		for(int j=i; j<n; j++){
			sum += a[j];
			cout << sum << " ";
		}
	}
}
