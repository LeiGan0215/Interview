template<class Record[]>
void sort(Record Array[],int n)
{
	int i;
	MaxHeap<Record> max_heap=MaxHeap<Record> (Array,n,n);
	for(int i=0;i<n;i++)
	{
		max_heap.RemoveMax();
	}
} 
