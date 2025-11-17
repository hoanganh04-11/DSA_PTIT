#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n+1];
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	sort(a+1, a+n+1);
	int j = 1; //chay tren mang a
	int b[n+1];
	for(int i=1; i<=n; i+=2){
		b[i] = a[j++];
	}
	for(int i=2; i<=n; i+=2){
		b[i] = a[j++];
	}
	for(int i=1; i<=n; i++){
		cout << b[i] << " ";
	}
}
