template <class Record>
void QuickSort(Record Array[],int left,int right)
{
	if(right<=left)
		return;
	int pivot=SelectPivot(left,right); 
	swap(Array,pivot,right);
	pivot=Partition(Array,left,right);
	QuickSort(Array,left,pivot-1);
	QuickSort(Array,pivot+1,right);
	
}

int SelectPivot(int left,int right)
{
	return (left+right)/2;
}

template <class Record>
int Partition(Record Array[],int left,int right)
{
	int l=left;
	int r=right;
	Record temp=Array[r];
	while(l!=r)
	{
		while(l<r&&Array[l]<=temp)
			l++;
		if(l<r)
		{
			Array[r]=Array[l];
			r--;
		} 
		
		while(l<r&&Array[r]>=temp)
			r--;
		if(l<r)
		{
			Array[l]=Array[r];
			l++;
		}
		
	}
	Arrray[l]=temp;
	return l;
}
