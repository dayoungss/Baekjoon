#include <iostream>
using namespace std;

//백준 1991 트리순회

typedef struct _tree {
	char value;
	_tree* left;
	_tree* right;
}_tree;

_tree tree[30];

void preOrder(_tree *);
void inOrder(_tree *);
void postOrder(_tree *);

int main()
{
	int n; 
	char value, left, right;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> value >> left >> right;
		int index = value - 'A';
		tree[index].value = value;
		if (left == '.') {
			tree[index].left = NULL;
		}else  tree[index].left = &tree[left - 'A'];
		if (right == '.') {
			tree[index].right = NULL;
		}else  tree[index].right = &tree[right - 'A'];
	}

	preOrder(&tree[0]);
	cout << '\n';
	inOrder(&tree[0]);
	cout << '\n';
	postOrder(&tree[0]);
	cout << '\n';
}

void preOrder(_tree *root){
	if (root->value == '.') {
		return;
	}
	cout << root->value;
	if (root->left != NULL) {
		preOrder(root->left);
	}
	if (root->right != NULL) {
		preOrder(root->right);
	}
}

void inOrder(_tree* root) {
	if (root->value == '.') {
		return;
	}
	if (root->left != NULL) {
		inOrder(root->left);
	}
	cout << root->value;
	if (root->right != NULL) {
		inOrder(root->right);
	}
}

void postOrder(_tree* root) {
	if (root->value == '.') {
		return;
	}
	if (root->left != NULL) {
		postOrder(root->left);
	}
	if (root->right != NULL) {
		postOrder(root->right);
	}
	cout << root->value;
}