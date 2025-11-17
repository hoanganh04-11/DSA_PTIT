#include<bits/stdc++.h>
using namespace std;

bool threeSum(int a[], int n, int s){
	for(int i=0; i<n; i++){
		int j = i+1, k = n-1;
		while(j < k){
			int curr_sum = a[i] + a[j] + a[k];
			if(curr_sum == s) return 1;
			else if(curr_sum < s) j++;
			else k--;
		}
	}
	return false;
}

int main(){
	int n, k; cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	if(threeSum(a, n, k)) cout << "YES";
	else cout << "NO";
}
