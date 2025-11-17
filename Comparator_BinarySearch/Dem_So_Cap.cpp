#include<bits/stdc++.h>
using namespace std;

int first_pos(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] == x){
			res = m;
			r = m-1;
		}
		else if(a[m] < x){
			l = m+1;
		}
		else{
			r = m-1;
		}
	}
	return res;
}

int last_pos(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] == x){
			res = m;
			l = m + 1;
		}
		else if(a[m] > x){
			r = m-1;
		}
		else{
			l = m+1;
		}
	}
	return res;
}


int main(){
	int n, k; cin >> n >> k;
	int a[n]; 
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	int ans = 0;
	for(int i=0; i<n; i++){
		int res1 = first_pos(a, i+1, n-1, a[i]+k);
		int res2 = last_pos(a, i+1, n-1, a[i]+k);
		if(res1 != -1){
			ans += res2 - res1 + 1;
		}
	}
	cout << ans << endl;
}
