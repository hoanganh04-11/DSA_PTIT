#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m; cin >> n >> m;
	int a[n], b[m];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<m; i++){
		cin >> b[i];
	}
	int i=0, j=0, ans=0;
	sort(a, a+n);
	sort(b, b+m);
	while(i < n && j < m){
		if(abs(a[i]-b[j]) <= 1){
			ans++;
			i++, j++;
		}
		else if(a[i] - b[j] > 1){
			j++;
		}
		else{
			i++;
		}
	}
	cout << ans << endl;
}
