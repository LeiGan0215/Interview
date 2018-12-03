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
	
}
