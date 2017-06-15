#include"SeqList.h"
#include<assert.h>
#include<stdio.h>


void InitSeqList(SeqList* list)		//初始化列表
{
	list->size = 0;
	memset(list->data, 0, MAX*sizeof(DATATYPE));
}

void PrintSeqList(SeqList* list)		//打印列表
{
	assert(list);
	for (size_t i = 0; i < list->size; ++i)
	{
		printf("%d ", list->data[i]);
	}
	printf("\n");
}

void PushBack(SeqList* list, DATATYPE data)		//尾插
{
	if (list->size == MAX)
	{
		printf("表已满");
		return;
	}

	list->data[list->size] = data;
	list->size++;
}

void PopBack(SeqList* list)			//尾删
{
	if (list->size > 0)
	{
		--list->size;
	}
}

bool Empty(SeqList* list)
{
	return list->size == 0;
}

void PushFront(SeqList* list, DATATYPE data)		//头插
{
	if (list->size == MAX)
	{
		printf("表已满");
		return;
	}
	else
	{
		for (size_t i = 0; i < list->size;++i)	//将元素依次向后移，腾出第一个位置
		{
			list->data[list->size + i] = list->data[list->size + i - 1];
		}
		list->data[0] = data;
		++list->size;
	}
}

void PopFront(SeqList* list)	//头删
{
	if (Empty(list))
	{
		return;
	}
	else
	{
		if (list->size == 1)
		{
			--list->size;
		}
		else
		{
			for (size_t i = 1; i < list->size; ++i)		//将元素依次向前搬移
			{
				list->data[list->size + i - 1] = list->data[list->size + i];
			}
			--list->size;
		}
	}
}

void Insert(SeqList* list, int pos, DATATYPE data)		//随机位置的前面插入
{
	if (list->size == MAX)
	{
		return;
	}
	assert(pos < list->size);
	for (size_t i = pos; i < list->size; ++i)
	{
		list->data[list->size + i] = list->data[list->size + i - 1];
	}
	list->data[pos] = data;
	list->size++;
}

void Erase(SeqList* list, int pos)						//删除指定位置的元素
{
	if (Empty(list))
	{
		return;
	}
	else
	{
		for (size_t i = list->size; i > pos; --i)
		{
			list->data[list->size + i - 1] = list->data[list->size + i];
		}
		--list->size;
	}
}

void Remove(SeqList* list, DATATYPE data)				//删除值为data的元素
{
	if (Empty(list))
	{
		return;
	}
	else
	{
		for (size_t i = 0; i < list->size; ++i)
		{
			if (list->data[i] == data)
			{
				list->data[list->size + i - 1] = list->data[list->size + i];
			}
		}
		--list->size;
	}
}
void RemoveAll(SeqList* list, DATATYPE data)			//删除所有值为data的元素
{
	if (Empty(list))
	{
		return;
	}
	else
	{
		int count = 0;
		for (size_t i = 0; i < list->size; ++i)
		{
			if (list->data[i] == data)
			{
				++count;
				list->data[list->size + i - 1] = list->data[list->size + i];
			}
		}
		list->size = list->size - count;
	}
}
int Find(SeqList* list, DATATYPE data)					//查找值为data的元素
{
	for (size_t i = 0; i < list->size; ++i)
	{
		if (list->data[i] == data)
		{
			return list->data[i];
		}
	}
	printf("没有找到");
	return -1;
}

void SortList(SeqList* list)							//排序
{
	if (Empty(list))
	{
		return;
	}
	else
	{
		int i = 0, j = 0;
		for (i = 0; i < list->size; ++i)
		{
			for (j = 0; j < list->size - i; ++j)
			{
				if (list->data[j] < list->data[j + 1])
				{
					int temp = list->data[j];
					list->data[j] = list->data[j + 1];
					list->data[j + 1] = temp;
				}
			}
		}
	}
}

int BinarySearch(SeqList* list, DATATYPE data)		//二分查找
{
	if (Empty(list))
	{
		return -1;
	}
	else
	{
		int left = 0;
		int right = list->size - 1;
		int mid = left + ((right - left) >> 1);
		SortList(list);
		while (left<right)
		{
			if (data < list->data[mid])
			{
				right = mid - 1;
			}
			else if (data>list->data[mid])
			{
				left = mid + 1;
			}
			else
			{
				return list->data[mid];
			}
			left--;
			right++;
		}
		printf("查找的值不存在");
		return -1;
	}
}