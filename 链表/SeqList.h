#include<iostream>

typedef int DATATYPE;
const  int MAX = 5;

struct SeqList
{
	DATATYPE data[MAX];		
	size_t size;			//当前的元素个数
};

void InitSeqList(SeqList* list);		//初始化列表
void PrintSeqList(SeqList* list);		//打印列表
bool Empty(SeqList* list);				//判空
void PushBack(SeqList* list, DATATYPE data);	//头插
void PopBack(SeqList* list);	//头删
void PushFront(SeqList* list, DATATYPE data);	//尾插
void PopFront(SeqList* list);	//尾删
void Insert(SeqList* list, int pos, DATATYPE data);		//随机位置的插入
void Erase(SeqList* list, int pos);						//删除指定位置的元素
void Remove(SeqList* list, DATATYPE data);				//删除值为data的元素
void RemoveAll(SeqList* list, DATATYPE data);			//删除所有值为data的元素
int Find(SeqList* list, DATATYPE data);					//查找值为data的元素
void SortList(SeqList* list);							//排序
int BinarySearch(SeqList* list, DATATYPE data);		//二分查找
