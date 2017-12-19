using namespace std;
#include <iostream>
#include "updateTree.cpp"

int* constructTree(int input[], int n)
{
	int* tree= new int[n+1];
	for (int i=0;i<n+1;i++)
		tree[i];

	for (int i=0;i<n;i++)
		updateTree(tree,n,i,input[i]);

	return tree;
}