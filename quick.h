#ifndef _QUICK_H
#define _QUICK_H
/*这个头文件是数组快速升序排序*/
 
/*宏定义，交换a，b值*/ 
#define SWAP(a, b) {int temp; temp=a; a=b; b=temp;}

void quick_sort_sub(int *data,int left,int right)
{
	int left_index = left;
	int right_index = right;
	int pivot = data[(left+right)/2];/*pivot为合适的分割位置*/
	
	while(left_index <= right_index)
	{
		for(left_index;data[left_index]<pivot;left_index++)
		{
			for(right_index;data[right_index]>pivot;right_index--)
			{
				if(left_index <= right_index)
				{
					SWAP(data[left_index], data[right_index]);
					left_index++;
					right_index--;
				}
			}
		}
	}
	if(right_index>left)
	{
		quick_sort_sub(int *data,int left,int right_index);
	}
	if(left_index<right)
	{
		quick_sort_sub(int *data,int left_index,int right);
	}
 } 
 
 void quick_sort(int *data,int data_size)
 {
 	quick_sort_sub(data,0,data_size-1);
 }
 
 #endif
