#include<bits/stdc++.h>
using namespace std;

int length(int a[], int n){
	int dem = 1, ans = 0;
	for(int i=1; i<n; i++){
		if(a[i] > a[i-1]){
			++dem;
		}
		else{
			ans = max(ans, dem);
			dem = 1;
		}
	}
	return ans;
}


int main(){
	int test; cin >> test;
	for(int t=1; t<=test; t++){
		int n; cin >> n;
		int a[n+1];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		a[n] = -1;
		n++;
		int m = length(a, n);
		int dem = 1;
		cout << "Test #" << t << " : " << endl;
		cout << m << endl;
		for(int i=1; i<n; i++){
			if(a[i] > a[i-1]){
				++dem;
			}
			else{
				if(dem == m){
					for(int j = i-dem; j<i; j++){
						cout << a[j] << " ";
					}
					cout << endl;
				}
				dem = 1;
			}
		}
	}
}
