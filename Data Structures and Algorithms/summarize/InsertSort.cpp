template <class Record>
void InsertSort(Record Array[],int n)
{
	int i,j;
	Record Tem;
	for(i=1;i<n;i++)
	{
		Tem=Array[i];
		j=i-1;
		while(j>=0&&Tem<Array[j])
		{
			Array[j+1]=Array[j];
			j=j-1;	
		} 
		Array[j+1]=Tem;
	}
	 
} 
