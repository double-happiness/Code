//��д������һ�� 1�� 100 �����������г��ֶ��ٴ����� 9
#include<stdio.h>
int main()
{
	int i=0;
	int j=0;
	if(i == 0)
		printf("num=9\n");
	for(i=1; i<10; i++)
		for(j=0; j<10; j++)
			if(j == 9)
				printf("num=%d%d\n",i,j);
	return 0;
}
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��
#include<stdio.h>

int main()
{
	double num=0;
	double sum=0;
	int flag=1;
	for(num=1; num<=100; num++)
	{
		sum=sum+1/(num)*flag;
		flag=-flag;
	}
	printf("sum=%lf\n",sum);
	return 0;
}



//���һ��������ÿһλ��
#include<stdio.h>
#include<math.h>

int main()
{
	int num=0;
	int n=1;
	int i=0;
	printf("������һ�������������\n");
	scanf("%d ",&num);
	//���ȵò���������λ��
	while(num > 0)
	{
		if(num >= pow(10,n-1)&&num < pow(10,n))
			printf("%d\n",n);
		else
			n=n+1;
	}
	printf("n=%d\n",n);
	for( i=n; i<0; i--)
		num=num%10;
		printf("%d ",num);
		printf("\n");
	return 0;
}