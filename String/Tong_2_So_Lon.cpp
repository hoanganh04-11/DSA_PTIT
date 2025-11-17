#include<bits/stdc++.h>
using namespace std;

void tong(string a, string b){
	string kq = "";
	while(a.size() < b.size()) a = "0" + a;
	while(b.size() < a.size()) b = "0" + b;
	int du = 0;
	for(int i=a.size()-1; i>=0; i--){
		int k = (a[i] - '0') + (b[i] - '0');
		if(k + du >= 10){
			kq += (k+du-10+'0');
			du = 1;
		}
		else{
			kq += (k+du+'0');
			du = 0;	
		}
	}
	if(du == 1) kq += '1';
	for(int i=kq.size(); i>=0; i--) cout << kq[i];
}

int main(){
	string a, b; 
	cin>> a >> b;
	tong(a, b);
}
