//2.�������⡿--ɾ��Сд��ĸ�ַ������ظ��ַ���������ԣ�����ɾ���ظ��ַ�����
//�ڱ���С�ַ�ǰ����ַ��� ���磬���룺bbcacdww�������bacdw
#include <iostream>
#include <string>
using namespace std;

//����һ���������
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

////////////��������
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