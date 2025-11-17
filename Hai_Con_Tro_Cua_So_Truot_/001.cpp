#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n, k; cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++) cin >> a[i];
	ll sum = 0;
	for(int i=0; i<k; i++){
		sum += a[i];
	}
	ll res = sum, index = k-1;
	for(int i=k; i<n; i++){
		sum = sum - a[i-k] + a[i];
		if(sum > res){
			res = sum;
			index = i;
		}
	}
	cout << res << endl;
	for(int i=index - k + 1; i<=index; i++){
		cout << a[i] << " ";
	}
}
