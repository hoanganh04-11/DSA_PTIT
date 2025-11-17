#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n;
	int chan = 0, le = 0;
	while(cin >> n){
		if(n%2==0) ++chan;
		else ++le;
	}
	if((chan + le % 2 == 0) && chan > le) cout << "YES" << endl;
	else if((chan + le % 2 == 1) && le > chan) cout << "YES" << endl;
	else cout << "NO" << endl;
}
