#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n; 
	int dem0 = 0, dem1 = 0, dem2 = 0;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
		if(a[i] == 0) dem0++;
		else if(a[i] == 1) dem1++;
		else dem2++;
	}
	for(int i=0; i<dem0; i++){
		cout << 0 << " ";
	}
	for(int i=0; i<dem1; i++){
		cout << 1 << " ";
	}
	for(int i=0; i<dem2; i++){
		cout << 2 << " ";
	}
}
