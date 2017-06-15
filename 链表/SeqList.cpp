#include"SeqList.h"
#include<assert.h>
#include<stdio.h>


void InitSeqList(SeqList* list)		//��ʼ���б�
{
	list->size = 0;
	memset(list->data, 0, MAX*sizeof(DATATYPE));
}

void PrintSeqList(SeqList* list)		//��ӡ�б�
{
	assert(list);
	for (size_t i = 0; i < list->size; ++i)
	{
		printf("%d ", list->data[i]);
	}
	printf("\n");
}

void PushBack(SeqList* list, DATATYPE data)		//β��
{
	if (list->size == MAX)
	{
		printf("������");
		return;
	}

	list->data[list->size] = data;
	list->size++;
}

void PopBack(SeqList* list)			//βɾ
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

void PushFront(SeqList* list, DATATYPE data)		//ͷ��
{
	if (list->size == MAX)
	{
		printf("������");
		return;
	}
	else
	{
		for (size_t i = 0; i < list->size;++i)	//��Ԫ����������ƣ��ڳ���һ��λ��
		{
			list->data[list->size + i] = list->data[list->size + i - 1];
		}
		list->data[0] = data;
		++list->size;
	}
}

void PopFront(SeqList* list)	//ͷɾ
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
			for (size_t i = 1; i < list->size; ++i)		//��Ԫ��������ǰ����
			{
				list->data[list->size + i - 1] = list->data[list->size + i];
			}
			--list->size;
		}
	}
}

void Insert(SeqList* list, int pos, DATATYPE data)		//���λ�õ�ǰ�����
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

void Erase(SeqList* list, int pos)						//ɾ��ָ��λ�õ�Ԫ��
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

void Remove(SeqList* list, DATATYPE data)				//ɾ��ֵΪdata��Ԫ��
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
void RemoveAll(SeqList* list, DATATYPE data)			//ɾ������ֵΪdata��Ԫ��
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
int Find(SeqList* list, DATATYPE data)					//����ֵΪdata��Ԫ��
{
	for (size_t i = 0; i < list->size; ++i)
	{
		if (list->data[i] == data)
		{
			return list->data[i];
		}
	}
	printf("û���ҵ�");
	return -1;
}

void SortList(SeqList* list)							//����
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

int BinarySearch(SeqList* list, DATATYPE data)		//���ֲ���
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
		printf("���ҵ�ֵ������");
		return -1;
	}
}