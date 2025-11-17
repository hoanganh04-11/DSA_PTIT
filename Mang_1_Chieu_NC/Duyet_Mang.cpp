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
		cout << a[i] << " ";
	}
	cout << endl;
	for(int i=n-1; i>=0; i--){
		cout << a[i] << " "; 
	}
	cout << endl;
	for(int i=0; i<n; i++){
		if(i%2==0) cout << a[i] << " ";
	}
	cout << endl;
	for(int i=0; i<n; i++){
		if(i%2==1) cout << a[i] << " ";
	}
	cout << endl;
	ll sum = 0;
	for(int i = 1; i<n; i++){
		sum = a[i] + a[i-1];
		cout << sum << " ";
		sum = 0;
	}
}
