#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, a[1005], ok;

int main(){
	int t; t = 1;
	while(t--){
		cin >> n >> k;
		int mt[n + 1][n + 1];
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				cin >> mt[i][j];
			}
		}
		for(int i=1; i<=n; i++) a[i] = i;
		vector<string> res;
		do{
			int sum = 0;
			for(int i=1; i<=n; i++){
				sum += mt[i][a[i]];
			}
			if(sum == k){
				string ans = "";
				for(int i=1; i<=n; i++){
					ans += to_string(a[i]);
					ans += " ";
				}
				res.push_back(ans);
			}
		}while(next_permutation(a+1, a+n+1));
		cout << res.size() << endl;
		for(string x : res){
			cout << x << endl;
		}
	}
}
