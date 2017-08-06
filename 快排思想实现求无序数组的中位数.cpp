2.【附加题】--求一个无序数组的中位数。
如：{ 2, 5, 4, 9, 3, 6, 8, 7, 1 }的中位数为5，{ 2, 5, 4, 9, 3, 6, 8, 7, 1, 0 }
的中位数为4和5。
要求：不能使用排序，时间复杂度尽可能高。
提示：考虑堆或者快排思想解决。
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

struct Grater
{
	bool operator() (const int& lhs, const int&rhs) const
	{
		return lhs < rhs;
	}
};

struct Less
{
	bool operator() (const int& lhs, const int&rhs) const
	{
		return lhs > rhs;
	}
};

int main()
{
	//int arr1[] = { 2, 5, 4, 9, 3, 6, 8, 7, 1 };
	int arr1[] = { 2, 5, 4, 9, 3, 6, 8, 7, 1, 0 };
	vector<int> v;
	size_t size = sizeof(arr1) / sizeof(arr1[0]);
	int mid = (size >> 1) + 1;
	typedef priority_queue<int, vector<int>, Grater> Mypq;
	Mypq pq;
	for (int i = 0; i < mid; i++)
	{
		pq.push(arr1[i]);
	}
	for (int i = mid + 1; i < size; i++)
	{
		if (pq.top() > arr1[i])
		{
			pq.pop();
			pq.push(arr1[i]);
		}
	}
	
	if (size % 2 == 1)
		cout << "中位数是" << pq.top() << endl;
	else
	{
		cout << "中位数是:" << pq.top();
		pq.pop();
		cout << " and " << pq.top() << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}


int PartSort(int* arr, int left, int right)
{
	int key = arr[right];
	while (left < right)
	{
		while (left < right && arr[left] < key)
			++left;
		swap(arr[left], arr[right]);
		while (left<right && arr[right]>key)
			--right;
		if (arr[left] != arr[right])
			swap(arr[left], arr[right]);
	}
	arr[left] = key;
	return left;
}

int QuickSort(int arr[],int left,int right)
{
	int mid = left + ((right - left) >> 1);
	int ret = 0;
	if (left < right)
	{
		int div = PartSort(arr, left, right);
		if (mid > div)
			ret = QuickSort(arr, div + 1, right);
		else if (mid < div)
			ret = QuickSort(arr, left, mid - 1);
		else
			return arr[mid];
	}
	return -1;
}
int main()
{
	int arr[] = { 2, 5, 4, 9, 3, 6, 8, 7, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int ret = QuickSort(arr, 0, n - 1);
	cout << "中位数是" << ret << endl;
	/*for (int i = 0; i < n; i++)
		cout << arr[i] << " ";*/
	cout << endl;
	system("pause");
	return 0;
}
