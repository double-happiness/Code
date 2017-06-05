//获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。
#include <stdio.h>
int main()
{
     int a,i=0;
     int arr1[16],arr2[16];
     scanf("%d",&a);
     while(i<32)
     {
          arr1[i/2]=a%2;
          a=a>>1;
          i++;
          arr2[(i-1)/2]=a%2;
          a=a>>1;
          i++;
     }
          printf("奇数列二进制序列为:");
     for(i=15;i>=0;i--)
     {    
          printf("%d",arr1[i]);
     }
          printf("\n偶数列二进制序列为:");
     for(i=15;i>=0;i--)
     {
          printf("%d",arr2[i]);
     }
return 0;
}
//求两个数的最大公约数。
#include<stdio.h>
int main()
{
	int m=0;
	int n=0;
	printf("请输入要求的公约数的两个数m和n:");
	scanf("%d,%d",&m,&n);
	int tmp;
	if(m>n)
	{
		tmp=n;
	}
	for(int i=n;i>=1;i--)
	{
       if (m%i==0&&n%i==0)
       {
              printf("最大公约数：%d \n",i);
              break;
       }
	}
		return 0;
}
//将三个数按从大到小输出。
#include<stdio.h>
int main()
{
	int max(int x,int y);
	int a=3;
	int b=5;
	int c=4;
	int m=0;
	m=max(a,c);
	m=(m,b);
	printf("m=%d\n",m);
	return 0;
}
int max(int x,int y)
{
	int max=0;
	if(x>y)
		max=x;
	else
		max=y;
	return max;
}