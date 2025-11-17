#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		int mini = INT_MAX;
		int maxi = 0;
		if(i>0){
			mini = min(mini, abs(a[i]-a[i-1]));
		}
		if(i<n-1){
			mini = min(mini, abs(a[i+1]-a[i]));
		}
		maxi = max(abs(a[0]-a[i]), abs(a[n-1]-a[i]));
		cout << mini << " " << maxi << endl;
	}
}
