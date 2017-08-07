//冒泡排序
#include<iostream>

using namespace std;

//普通版的冒泡排序
//void BubbleSort(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j]>arr[j+1])
//				swap(arr[j + 1], arr[j]);
//		}
//	}
//}

//优化一：这一趟发生交换说明还未就绪，否则说明排序已经就绪
//void BubbleSort(int* arr, int n)
//{
//	bool flag = true;
//	int k = n;
//	while (flag)
//	{
//		flag = false;
//		for (int j = 1; j < k; j++)
//		{
//			if (arr[j - 1]>arr[j])
//			{
//				swap(arr[j - 1], arr[j]);
//				flag = true;
//			}
//		}
//		k--;
//	}
//}

//如果后面的数已经全部就绪，只有前面的还未就绪时就将每次的区间设置到未就绪的位置
void BubbleSort(int* arr, int n)
{
	int flag = n;
	int k = 0;
	while (flag)
	{
		k = flag;
		flag = 0;
		for (int j = 1; j < k; j++)
		{
			if (arr[j - 1]>arr[j])
			{
				swap(arr[j - 1], arr[j]);
				flag = j;
			}
		}
	}
}


int main()
{
	int arr[9] = { 2, 3, 4, 8, 6, 0, 4, 3, 9 };
	BubbleSort(arr, 9);
	for (size_t i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
