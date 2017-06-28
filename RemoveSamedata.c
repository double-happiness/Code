//移除数组中相同的数

#include<stdio.h>
#include<assert.h>
#include<malloc.h>
#include<stdlib.h>

int RemoveSameData(int arr[], size_t n)
{
	assert(arr);
	int i = 0;
	int count = n;
	for (; i < n - 1; i++)
	{
		if (arr[i] == arr[i + 1])
			count--;
	}
	return count;
}

int mian()
{
	int n = 0;
	int i = 0;
	int *arr = NULL;
	int ret = 0;
	scanf("%d", &n);
	if (n <= 0)
	{
		printf("输入大数组大小有误\n");
		scanf("%d", &n);
	}
	arr = (int*)malloc(n*sizeof(int));
	if (NULL == arr)
	{
		printf("not of memory\n");
		return 0;
	}
	for (; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	ret = RemoveSameData(arr, n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}