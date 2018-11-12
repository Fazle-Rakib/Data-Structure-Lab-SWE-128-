
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
	Node (int item)
	{
		this->data = item;
		this->left = NULL;
		this->right = NULL;
	}
};

void preOrderTraverse(Node* root)
{
    printf("%d ",root->data);
	if(root->left != NULL)
	{
		preOrderTraverse(root->left);
	}

	if(root->right != NULL)
	{
		preOrderTraverse(root->right);
	}
}

Node* bstInsert(Node* root,int item)
{
	if(root == NULL)
	{
		return new Node(item);
	}
	else if(item < root->data)
	{
		root->left = bstInsert(root->left,item);
	}
	else
	{
		root->right = bstInsert(root->right,item);
	}
	return root;

}

int main()
{
	Node* root = NULL;
	root = bstInsert(root,10);
	bstInsert(root,9);
	bstInsert(root,3);
	bstInsert(root,91);
	bstInsert(root,1);
	bstInsert(root,5);
	bstInsert(root,200);
	bstInsert(root,2);
	cout << "After Insertion Pre-order Traversal : ";
	preOrderTraverse(root);
	cout << endl;
	bstInsert(root,30);
}

