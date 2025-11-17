#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* tao(vector<int> &nums){
	if(nums.size() == 0) return NULL;
	TreeNode *root = new TreeNode(nums[0]);
	queue<TreeNode*> q;
	q.push(root);
	int i = 1;
	while(!q.empty() && i < nums.size()){
		TreeNode* node = q.front(); q.pop();
		//Xu ly nut con ben trai
		if(nums[i] != -1){
			node->left = new TreeNode(nums[i]);
			q.push(node->left);
		}
		i++;
		//Xu ly nut con ben phai
		if(i < nums.size() && nums[i] != -1){
			node->right = new TreeNode(nums[i]);
			q.push(node->right);
		}
		i++;
	}
	return root;
}

//Ham in ra thu tu cap do cua cac gia tri nut trong cay nhi phan

void cap(TreeNode* root){
	if(!root) return;
	
	queue<TreeNode*> q;
	q.push(root);
	
	while(!q.empty()){
		int size = q.size();
		for(int i = 0; i < size; i++){
			TreeNode* node = q.front();
			q.pop();
			cout << node->val << " ";
			
			if(node->left) q.push(node->left);
			if(node->right) q.push(node->right);
		}
		cout << endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> nums(n);
		for(int i=0; i<n; i++){
			cin >> nums[i];
		}
		TreeNode* root = tao(nums);
		cap(root);
	}
}
