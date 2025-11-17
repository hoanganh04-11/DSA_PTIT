#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, X[100];

void ktao(){
	for(int i=1; i<=n; i++){
		X[i] = i;
	}
}         

//[x, y] => sort(a + x, a + y + 1);
//reverse(a + x, a + y + 1);
//next_permutation(a + x, a + y + 1);

int main(){
//	int X[5] = {1, 2, 3, 5, 4};
//	prev_permutation(X, X+5);
//	for(int x : X){
//		cout << x << " ";
//	}
//	cout << endl;
//	next_permutation(X, X+5);
//	for(int x : X){
//		cout << x << " ";
//	}
	cin >> n; 
	ktao();
	do{
		//in ra cau hinh hien tai
		for(int i=1; i <= n; i++){
			cout << X[i] << " ";
		}
		cout << endl;
	}while(next_permutation(X + 1, X + n + 1));
}
