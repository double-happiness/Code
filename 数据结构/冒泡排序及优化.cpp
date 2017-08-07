//ð������
#include<iostream>

using namespace std;

//��ͨ���ð������
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

//�Ż�һ����һ�˷�������˵����δ����������˵�������Ѿ�����
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

//�����������Ѿ�ȫ��������ֻ��ǰ��Ļ�δ����ʱ�ͽ�ÿ�ε��������õ�δ������λ��
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
