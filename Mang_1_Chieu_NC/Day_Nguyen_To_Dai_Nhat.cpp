#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool prime(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return n>1;
}

int main(){
	int n; cin >> n;
	int a[n+1];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	a[n] = 6;
	n++;
	ll dem = 0, sum = 0; // mang con
	ll ans = 0, sum_max = 0, index = -1; //ket qua
	
	for(int i=0; i<n; i++){
		if(prime(a[i])){
			++dem;
			sum += a[i];
		}
		else{
			if(dem > ans){
				ans = dem;
				sum_max = sum;
				index = i-1;
			}
			else if(dem == ans && sum > sum_max){
				sum_max = sum;
				index = i-1;
			}
			dem = 0;
			sum = 0;
		}
	}
	if(index == -1) cout << "NOT FOUND";
	else{
		cout << ans << endl;
		for(int i = index - ans + 1; i <= index; i++){
			cout << a[i] << " ";
		}
	}
}
