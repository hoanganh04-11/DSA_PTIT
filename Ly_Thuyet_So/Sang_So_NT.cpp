#include<bits/stdc++.h>
using namespace std;
#define ll long long

//Sang so nguyen to: 1 => N, a => b

int prime[1000001]; // 0 => 10^6

//Buoc 1: coi tat ca cac so tu 0 => N la snt
//Buoc 2: sang, loai dan
//1 so la boi cua 1 so nguyen to => khong phai la so nguyen to
void sang(){
	for(int i=0; i<=1000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i=2; i<=sqrt(1000000); i++){
		if(prime[i] == 1){
			for(int j = i * i; j <= 1000000; j+=i){
				prime[j] = 0;
			}
		}
	}
}


int main(){
	sang();
	int n; cin >> n;
	for(int i=0; i<=n; i++){
		if(prime[i]) cout << i << " ";
	}
}
