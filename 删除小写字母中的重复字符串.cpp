//2.【附加题】--删除小写字母字符串中重复字符。如果可以，优先删除重复字符中排
//在比他小字符前面的字符。 比如，输入：bbcacdww；输出：bacdw
#include <iostream>
#include <string>
using namespace std;

//方法一：暴力求解
void DelSameElme(char* arr)
{
	int len = strlen(arr);
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] == 0)
				continue;
			if (arr[i] == arr[j])
				arr[i] = 0;
		}
	}
	for (int i = 0, n = 0; i < len; i++)
	{
		if (arr[i] != 0)
		{
			arr[n++] = arr[i];
		}
	}
}

////////////方法二：
void DelSameEleme(char* str)
{
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

int main()
{
	char arr[] = "bbcacdww";
	DelSameEleme(arr);
	cout << arr << endl;
	system("pause");
	return 0;
}