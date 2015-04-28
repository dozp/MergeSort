#include "MergeSort.h"
#include "gtest/gtest.h"

using namespace std;

TEST(MergeSortTest, Test1)
{
	int S[]={2, 4,3, 6,5,7,9,2};
	merge_sort(S,sizeof(S)/sizeof(int));
	int exp_array[]={2,2,3,4,5,6,7,9};
	for(int i=0;i<sizeof(S)/sizeof(int);i++)
	{
		EXPECT_EQ(exp_array[i], S[i]);
		//cout<<S[i]<<" ";
	}
	cout<<endl;
	
}
