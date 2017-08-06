1.【基础题】--将N个字符的数组，循环右移K位。时间复杂度O(N)。
#include<iostream>
#include<assert.h>
using namespace std;

void Reverse(char* str, int left, int right)
{
	assert(str);
	while (left < right)
	{
		int tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}

void ReverseRightK(char* str, int n, int k)
{
	assert(str && n > 0);
	char* str1 = str;
	char* str2 = str;
	int begin = 0;
	int end = 0;
	for (int i = 0; i < n - k; i++)
	{
		end++;
		str++;
	}
	Reverse(str1, begin, end);
	Reverse(str2, end, n - 1);
	Reverse(str, 0, n - 1);
}


	char arr[26] = { 0 };
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		arr[str[i] - 96]++;
	}
	for (int i = 0, n = 0; i < 26; i++)
	{
		while (arr[str[i]] && arr[str[i--]])
		{
			if (arr[str[i] == 1])
			{
				str[n++] = str[i];
			}
		}
	}
}
