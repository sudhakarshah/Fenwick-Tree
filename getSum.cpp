
int getSum(int tree[], int index)
{
	int sum=0;
	index=index+1;

	while (index>0)
	{
		sum += tree[index];
		index-= index & (-index);
	}

	return sum;
}