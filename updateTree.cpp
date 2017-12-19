
void updateTree(int tree[], int n, int index,int value)
{
	index=index+1;

	while (index<=n)
	{
		tree[index]+=value;
		index += (index) & (-index);
	}

}