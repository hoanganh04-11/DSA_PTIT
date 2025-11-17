#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	char a[n];
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	int t[6] = {'2', '8', 't', 'e', 'c', 'h'};
	int j = 0;
	for(int i=0; i<n; i++){
		if(a[i] == t[j]){
			++j;
		}
		else if(j == 6) break;
	}
	if(j == 6) cout << "28TECH" << endl;
	else cout << "HCET82" << endl;
}
