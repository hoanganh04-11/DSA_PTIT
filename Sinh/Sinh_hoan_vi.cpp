#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[100], ok;

void ktao(){
	//cau hinh dau tien
	for(int i=1; i<=n; i++){
		a[i] = i;
	}
}

void sinh(){
	//bat dau tu vi tri n-1: i = n - 1
	//chung nao a[i] > a[i+1] thi phai dich sang ben trai
	int i = n - 1;
	while(i >= 1 && a[i] > a[i+1]){
		--i;
	}
	if(i == 0) ok = false;
	else{
		// a[i] < a[i+1]
		//di tim so dung sau vi tri i, > a[i], va nho nhat co the
		int j = n; //bat dau tu chi so cuoi cung, bo qua cac vi tri a[j] < a[i]
		while(a[i] > a[j]) --j; //dich trai
		//a[j]: phan tu lon hon a[i] ma nho nhat
		swap(a[i], a[j]);
		//sap xep cac phan tu i + 1 => n theo thu tu tang dan
		//sort(a + i + 1, a + n + 1); O(nlogn)
		//lap nguoc doan tu i + 1 => n
		reverse(a + i + 1, a + n + 1);
	}
}

// permutation
// next_permutation() : sinh ra hoan vi ke tiep
// prev_permutation() : sinh ra hoan vi ke truoc

int main(){
	cin >> n;
	ktao();
	ok = true;
	while(ok){
		for(int i=1; i <= n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
		sinh();
	}
}
