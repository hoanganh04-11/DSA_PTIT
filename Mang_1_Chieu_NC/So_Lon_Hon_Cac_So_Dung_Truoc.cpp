#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int max_val = a[0];
	cout << max_val << " ";
	for(int i=0; i<n; i++){
		if(a[i] > max_val){
			cout << a[i] << " ";
			max_val = a[i];
		}
	}
}
