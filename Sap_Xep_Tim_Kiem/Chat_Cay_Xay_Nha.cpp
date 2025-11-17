#include<bits/stdc++.h>
using namespace std;
#define ll long long

int f(int a[], int n, int h){
	int ans = 0;
	for(int i=0; i<n; i++){
		if(a[i] >= h) ans += a[i] - h;
	}
	return ans;
}

int main(){
	int n, l; cin >> n >> l;
	int a[n];
	int max_val = INT_MIN;
	for(int i=0; i<n; i++){
		cin >> a[i];
		max_val = max(max_val, a[i]);
	}
	int left = 0, right = max_val;
	int ans = 0;
	while(left <= right){
		int mid = (right-left) / 2;
		if(f(a, n, mid) >= l){
			ans = mid;
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}
	cout << ans;
} 
