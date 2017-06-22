#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#define MAX(a, b) ((a)>(b)?(a):(b))

int main()
{
	int x = 5;
	int y = 8;
	int z = MAX( x++, y++);
	//int z = ((x++)>(y++)?(x++):(y++))

	printf("x = %d, y = %d, z = %d\n",x,y,z );
	return 0;
}
//
//void* alloc(int sz)
//{
//	int *p = (int *)malloc(sz);
//	if(p  == NULL)
//	{
//		printf("out of memory\n");
//		exit(1);
//	}
//	return p;
//}
//#define MALLOC(N, TYPE)\
//	alloc(N*sizeof(TYPE));
//
//int main()
//{
//	/*int *p = (int *)malloc(155 * sizeof(int));
//	if(p  == NULL)
//	{
//		printf("out of memory\n");
//		exit(1);
//	}*/
//	//...
//	int i = 0;
//	int *ptr = (int *)MALLOC(10, int);
//	
//	for(i = 0;i<10; i++)
//	{
//		*(ptr+i) = i;
//	}
//	for(i = 0;i<10; i++)
//	{
//		printf("%d\n",*(ptr+i));
//	}
//	free(ptr);
//
//	return 0;
//}
//

//
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))

// int Max_int(int x, int y)
// {
// 	return x>y?x:y;
// }
// 
// int Max_float(float x, float y)
// {
// 	return x>y?x:y;
// }

//int max(int x, int y)
//{
//
//}
//
//int main()
//{
//	int max1= MAX(1,2);
//	float max2 = MAX(1.2,2.3);
//	printf("max1 = %d\n",max1);
//	printf("max2 = %f\n",max2);
//	return 0;
//}
//
//#define paster( n ) \
//	printf( "token" #n " = %d", token##n )
//
//int main()
//{
//	int token9 = 9;
//	paster(9);
//	return 0;
//}



//#define CAT( STR1, STR2 )  \
//	STR1##STR2
//
//int main()
//{
//	int aabb = 100;
//	printf("%d\n" ,aabb);
//}

//#define DOUBLE(Y) ((Y)+(Y))
//
//#define SQUARE(X)	((X)*(X))
//
//
//#define M 9
//
//#define PRINT( FORMAT, VALUE )    \
//	printf("the value of "#VALUE " is "FORMAT"\n" , VALUE)
//
//
//int main()
//{
//	PRINT("%d" ,M);
//	//PRINT("%d ",9);
//	//printf("the value of ""M"" is ""%d""\n",9);
//	return 0;
//}

//#define M 9
//
//#define PRINT( FORMAT, VALUE )    \
//	printf("the value is " FORMAT"\n",VALUE)
//
//int main()
//{
//	PRINT("%d" ,M);
//	//PRINT("%d", 9);
//	//printf("the value is ""%d""\n" , 9);
//	//printf("the value is %d\n",9);
//	
//	return 0;
//}
//
//#define M 10
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	//int ret = SQUARE(4+1);
//	int ret = 2*DOUBLE(10);
//
//	//MAX(10, 20);
//	//
//	//int ret = 4+1*4+1
//	//int ret = 9
//	printf("%d\n", ret);
//	return 0;
//}
//
//#define MAX(X,Y)  X>Y?X:Y
//
//int Max(int x, int y)
//{
//	return x>y?x:y;
//	////
//
//
//
//
//
//
//}
//
//int main()
//{
//	int a =10;
//	int b = 20;
//	//int max = MAX(a,b);
//	//int max = a>b?a:b;
//	int max = Max(a,b);
//	printf("%d\n", max);
//	return 0;
//}
//
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
//            date:%s\ttime:%s\n" ,\
//			__FILE__,__LINE__ ,       \
//			__DATE__,__TIME__ )
//
//
//int main()
//{
//	int i = 0;
//	for(i = 0;i<10;i++)
//	{
//		if(i%2 == 0)
//			DEBUG_PRINT;
//		else
//			printf("hehe\n");
//	}
//	return 0;
//}


//
//#define CASE break;case
//
//int main()
//{
//	int i = 0;
//	switch(i)
//	{
//	case 1:
//	break;
//	case 2:
//	break;
//	case 3:
//	break;
//	case 4:
//		break;
//	}
//	return 0;
//}
//
//#define M 100
//#define reg register
//int main()
//{
//	int reg i = 0;
//	int i = 0;
//	for(i = 0;i<10;i++)
//	{
//		printf("file:%s line:%d Date:%s i = %d\n", 
//			__FILE__, __LINE__, __DATE__,i);
//	}
//	printf("%d\n",M);
//	return 0;
//}
//int g_val = 10;
//static int s_g_val = 20;
//
//void test_fun()
//{}
//
//int main()
//{
//	return 0;
//}