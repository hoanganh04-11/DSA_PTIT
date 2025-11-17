#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll C[1005][1005];
void init(){
	// C[i][j]: luu to hop chap j cua i
	for(int i=0; i<=1000; i++){
		for(int j=0; j<=i; j++){
			if(j == 0 || j == i){
				C[i][j] = 1;
			} 
			else{
				C[i][j] = C[i-1][j-1] + C[i-1][j];
				C[i][j] %= 1000000007;
			}
		}
	}
}
int main(){
	init();
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		cout << C[n][k] << endl;
	}
}
