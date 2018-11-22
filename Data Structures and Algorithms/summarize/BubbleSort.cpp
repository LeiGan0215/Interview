template <class Record>
void BubbleSort(Record Array[],int n)
{
	bool NoSwap;
	int i,j;
	for(i=0;i<n-1;i++)
	{
		NoSwap=true;
		for(i=0;i<n-1;i++)
		{
			if(Array[j]<Array[j-1])
			{
				swap(Array,j,j-1);
				NoSwap=false;
			}
			
		}                                                                                                                                                                                                                                                                                                                                                                                                              
		if(NoSwap)
			return;		
	}
}

template <class Record>
void swap(Record Array[],int i,int j)
{
	Record temp;
	temp=Array[i];
	Array[i]=Array[j];
	Array[j]=Array[i];
}
