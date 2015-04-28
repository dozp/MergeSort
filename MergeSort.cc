#include "MergeSort.h"
#include "../merge/merge.h"

void merge_sort(int S[], size_t size)
{
	if(size==1) return;
	int length=(int)size;
	int m, n;
	m=length/2;
	n=length-m;
	int A[m];
	int B[n];
	for(int i=0; i<m; i++)
		A[i]=S[i];
	for(int i=0; i<n; i++)
		B[i]=S[m+i];
	merge_sort(A, m);
	merge_sort(B,n);
	merge(A, B, m, n, S);
}
