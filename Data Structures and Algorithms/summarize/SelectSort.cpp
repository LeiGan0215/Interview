template<class Record[]>
void SelectSort(Record Array[],int n)
{
	int i,j,Smallest;
	for(i=0;i<n-1;i++)
	{
		Smallest=i;
		for(j=i+1;j<n;j++)
		{
			if(Array[j]<Array[Smallest])
				Smallest=j;
		}
		swap(Array,i,Smallest);
	}
} 
