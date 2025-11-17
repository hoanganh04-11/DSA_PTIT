#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int p_25 = 0;
	int p_50 = 0;
	bool cS = true;
	for(int i=0; i<n; i++){
		int x; cin >> x;
		if(x == 25){
			p_25++;
		}
		else if(x == 50){
			if(p_25 >= 1){
				p_25--;
			}
			else{
				cS = false;
				break;
			}
		}
		else if(x == 100){
			if(p_25 >= 1 && p_50 >= 1){
				p_25--;
				p_50--;
			}
			else if(p_25 >= 3){
				p_25 -= 3;
			}
			else{
				cS = false;
				break;
			}
		}
	}
	if(!cS) cout << "YES" << endl;
	else cout << "NO" << endl;
}
