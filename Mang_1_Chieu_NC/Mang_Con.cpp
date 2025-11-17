#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9+7;

int main(){
	int n, m; cin >> n >> m;
	int a[n], b[m];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<m; i++){
		cin >> b[i];
	}
	int j = 0; //chay tren mang b
	for(int i=0; i<n; i++){
		if(a[i] == b[j]){
			j++;
		}
		if(j == m){ //duyet xong mang b tren mang a
			break;
		}
	}
	if(j == m) cout << "YES" << endl;
	else cout << "NO" << endl;
}
