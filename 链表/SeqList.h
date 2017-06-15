#include<iostream>

typedef int DATATYPE;
const  int MAX = 5;

struct SeqList
{
	DATATYPE data[MAX];		
	size_t size;			//��ǰ��Ԫ�ظ���
};

void InitSeqList(SeqList* list);		//��ʼ���б�
void PrintSeqList(SeqList* list);		//��ӡ�б�
bool Empty(SeqList* list);				//�п�
void PushBack(SeqList* list, DATATYPE data);	//ͷ��
void PopBack(SeqList* list);	//ͷɾ
void PushFront(SeqList* list, DATATYPE data);	//β��
void PopFront(SeqList* list);	//βɾ
void Insert(SeqList* list, int pos, DATATYPE data);		//���λ�õĲ���
void Erase(SeqList* list, int pos);						//ɾ��ָ��λ�õ�Ԫ��
void Remove(SeqList* list, DATATYPE data);				//ɾ��ֵΪdata��Ԫ��
void RemoveAll(SeqList* list, DATATYPE data);			//ɾ������ֵΪdata��Ԫ��
int Find(SeqList* list, DATATYPE data);					//����ֵΪdata��Ԫ��
void SortList(SeqList* list);							//����
int BinarySearch(SeqList* list, DATATYPE data);		//���ֲ���
