#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include"Seqlist.h"

void menu()
{

	printf("0.exit*************1.print_SeqList*****\n");
	printf("2.pushback*********3.pophback**********\n");
	printf("4.pushfront********5.popfront**********\n");
	printf("6.insert***********7.erase*************\n");
	printf("8.find*************9.remmove***********\n");
	printf("10.remmove_all*****11.empty************\n");
}

int main()
{
	int input = 0;
	DATATYPE data = 0;
	SeqList seqlist;
	InitSeqList(&seqlist);
	while (true)
	{
		menu();
		printf("请输入你要的选项");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			PrintSeqList(&seqlist);
			break;
		case 2:
			{
				  printf("请输入你要插入的元素");
					  scanf("%d", &data);
					  PushBack(&seqlist, data);
			}
			break;
		case 3:
			PopBack(&seqlist);
			break;
		case 4:
			{
				  printf("请输入你要插入的元素");
				  scanf("%d", &data);
				  PushFront(&seqlist, data);
			}
			break;
		case 5:
			PopFront(&seqlist);
			break;
		case 6:
			{
				  int pos = 0;
				  printf("请输入你要插入的位置");
				  scanf("%d", &pos);
				  printf("\n请输入你要插入的元素");
				  scanf("%d", &data);
				  Insert(&seqlist, pos, data);
			}
			break;
		case 7:
			{
				  int pos = 0;
				  printf("请输入你要删除的位置");
				  scanf("%d", &pos);
				  Erase(&seqlist, pos);
			}
			break;
		case 8:
			{
				  printf("请输入你要查找的元素：");
				  scanf("%d", &data);
				  Find(&seqlist, data);
			}
			break;
		case 9:
			{
				  printf("请输入你要删除的元素：");
				  scanf("%d", &data);
				  Remove(&seqlist, data);
			}
			break;
		case 10:
			{
				   printf("请输入你要删除的元素：");
				   scanf("%d", &data);
				   RemoveAll(&seqlist, data);
			}
			break;
		case 11:
			{
				   bool ret;
				   ret = Empty(&seqlist);
			}
			break;
		case 0:
			exit(0);
			break;
		default:
			break;
		}
	}
	scanf("%d", &input);
	system("pause");
	return 0;
}