#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[1005];
bool ok = true;

void init(){
	// khoi tao cau hinh dau tien
	for(int i=1; i<=n; i++){
		a[i] = i; // 1234...n
	}
}

void sinh(){
	// bat dau tu vi tri n-1: i = n-1
	// chung nao a[i] > a[i+1] thi phai dich sang ben trai
	int i = n - 1;
	while(i >= 1 && a[i] > a[i+1]){
		--i;
	}
	if(i == 0) ok = false;
	else{
		//a[i] < a[i+1]
		// di tim so dung sau vi tri i, > a[i], va nho nhat co the
		int j = n; // bat dau tu chi so cuoi cung, bo qua cac vi tri ma a[j] < a[i]
		while(a[i] > a[j]) --j; // dich trai
		// a[j] phan tu lon hon a[i] ma nho nhat
		swap(a[i], a[j]);
		// sap xep cac phan tu tu i + 1 => n theo thu tu tang dan
		reverse(a + i + 1, a + n + 1);
	}
}

//permutation
//next_permutation(): sinh ra hoan vi ke tiep
//prev_permutation(): sinh ra hoan vi ke truoc

int main(){
	int X[5] = {1, 2, 3, 4, 5};
	next_permutation(X, X+5);
	//1 2 3 5 4
	for(int x : X){
		cout << x << " ";
	}
}
