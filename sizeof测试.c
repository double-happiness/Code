#define _CRT_SECURE_NO_WARNINGS 1

// #define LINE 25
// #define MAX 1024
#include <stdio.h>
//int main()
//{
//	//二维数组
//	int a[3][4] = {0};
//	printf("%d\n",sizeof(a));//48
//	printf("%d\n",sizeof(a[0][0]));//4
//	printf("%d\n",sizeof(a[0]));//16
//	printf("%d\n",sizeof(a[0]+1));//4
//	printf("%d\n",sizeof(a+1));//4
//	printf("%d\n",sizeof(&a[0]+1));//4
//	printf("%d\n",sizeof(*a));//16
//	printf("%d\n",sizeof(a[3]));//16
// 	printf("%p\n",&a[0]+1);
// 	printf("%p\n",&a[0][0]);
//	return 0;
//}






//
//int main()
//{
//	char arr[LINE][MAX] = {0};
//	int i = 0;
//	int j = 0;
//	while(gets(arr[i]))
//	{
//		if(arr[i][0] == '\0')
//			break;
//		i++;
//	}
//	for(j = 0;j<i; j++)
//	{
//		puts(arr[j]);
//	}
//	return 0;
//}
// int arr[10];
// char ch[3][5]= {{'a','b','c'},{'d','e','f'}};


//
//int main()
//{
//	int arr[3][4];
//	int i = 0;
//	int j = 0;
//	int *parr = &arr[0][0];
//	for(i = 0; i<sizeof(arr)/sizeof(arr[0][0]); i++)
//	{
//		//*(parr+i) = i+1;
//		parr[i] = i+1;
//	}
//	for(i=0; i<3; i++)
//	{
//		for(j=0; j<4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//	}
//	/*int i = 0;
//	int j = 0;
//	for(; i<3; i++)
//	{
//		for(j=0; j<4; j++)
//		{
//			arr[i][j] = i*4+j+1;
//		}
//	}
//	for(i=0; i<3; i++)
//	{
//		for(j=0; j<4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//	}*/
//	return 0;
//}
//
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a = 10;
//	char c = 'w';
//	int *p = &a;
//	char *pc = &c;
//	p = &c;
//	pc = &a;
//	p+1;
//	pc+1;
//
//	//&a+1;
//	//&c+1;
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4];
//	int i = 0;
//	int j = 0;
//	for(i = 0; i<3; i++)
//	{
//		for(j = 0; j<4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i,j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10];
//	int *p = &arr;
//	//int (*ptr)[10];
//	//int a = 10;
//	//char c = 'w';
//	//int *p = &a;
//	//char *q = &c;
//	//printf("%p\n", &c);//char *p;
//	//printf("%p\n", &c+1);
//	//printf("%p\n", &a);//int *p;
//	//printf("%p\n", &a+1);
//
//
//
//	//一维数组
//	/*
//	int a[] = {1,2,3,4};
//	//0x10000000
//	//&a+1==0x10000010
//	//a+1===0x10000004
//	printf("%p\n", &a);
//	printf("%p\n", a);
//	printf("%p\n", &a+1);
//	printf("%p\n", a+1);*/
//	//sizeof(数组名)
//	//&数组名
//	//printf("%d\n",sizeof(a));//16
//	//printf("%d\n",sizeof(a+0));//4
//	//printf("%d\n",sizeof(*a));//4
//	//printf("%d\n",sizeof(a+1));//4
//	//printf("%d\n",sizeof(a[1]));//4
//	//printf("%d\n",sizeof(&a));//4
//	//printf("%d\n",sizeof(&a+1));//4
//	//printf("%d\n",sizeof(&a[0]));//4
//	//printf("%d\n",sizeof(&a[0]+1));//4
//
//	return 0;
//}