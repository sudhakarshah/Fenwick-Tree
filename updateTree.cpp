
int updateTree(int tree, int n, int index,int value)
{
	index=index+1;

	while (index>=0)
	{
		tree[index]+=value;
		index += (index) & (-index);
	}

}