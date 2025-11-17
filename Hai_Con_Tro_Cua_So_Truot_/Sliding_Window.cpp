#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[10001];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		ll sum = 0;
		for(int i=0; i<k; i++){
			sum += a[i];
		}
		ll res = sum, index = 0;
		for(int i = k; i<n; i++){
			sum = sum - a[i-k] + a[i];
			if(sum > res){
				res = sum;
				index = i - k + 1; // chi so bat dau cua cua? so
			}
		}
		cout << res << endl;
		for(int j = 0; j<k; j++){
			cout << a[index + j] << " ";
		}
		cout << endl;
	}
}
