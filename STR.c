#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

//strlen�������ܣ����������ַ���str �ĳ���( ����ֵ������֮ǰ�ַ���Ŀ)��

size_t MyStrlen1(const char* str)	//��const��ֹstr���޸�
{
	assert(str);		//���ԣ���ֹstrΪ��ָ�����Ұָ������
	size_t count = 0;
	while (*str++)
	{
		++count;
	}
	return count;
}

size_t MyStrlen2(const char* str)
{
	assert(str);
	const char* eos = str;
	while (*eos++)
		;
	return (eos - str - 1);
}


//strcpy�������ܣ������ַ���from �е��ַ����ַ���to��������ֵ������������ֵΪָ��to
char* MyStrcpy(char* dst, const char* src)		//srcΪԭ�ַ�����dstΪĿ���ַ���
{
	assert(src && dst);
	char* ret = dst;	//����ret����dst����ʼλ��
	while (*dst++ = *src++)		//��src�е�ֵһ�ο�����dst֮��
	{
		;
	}
	return dst;
}

//strcmp�������ܣ��Ƚ��ַ���str1 and str2
//less than 0	str1 is less than str2
//equal to 0	str1 is equal to str2
//greater than 0	str1 is greater than str2


int MyStrcmp(const char* dst, const char* src)
{
	assert(dst && src);
	int ret = 0;
	while (!(ret = *dst - *src))
	{
		src++;
		dst++;
	}
	
	if (ret < 0)
		return -1;

	else if(ret > 0)
		return 1;

	return ret;
}

//strcat�������ܣ��������ַ���str2 ���ӵ�str1��ĩ�ˣ�������ָ��str1
char* MyStrcat(char *src, const char*dst)
{
	assert(src && dst);
	int count = 0;
	char* ret = src;
	while (*src)	//�����++�ϲ�д������������һ��
	{
		src++;
	}
	while (*src++ = *dst++)
	{
		;
	}
	return ret;
}

//strchr�������ܣ���������һ��ָ��str ��ch �״γ��ֵ�λ�ã���û����str ����ch������NULL

const char* MyStrchr(const char* str, char ch)
{
	assert(str);
	while (*str)
	{
		if (*str == ch)
			return str; 
		str++;
	}
	return NULL;
}

//strrchr�������ܣ���������һ��ָ�룬��ָ���ַ�ch ���ַ���str
//ĩ�γ��ֵ�λ�ã����ƥ��ʧ�ܣ�����NULL
const char* MyStrrchr(const char* str,char ch)
{
	assert(str);
	const char* tmp = str;
	while (*str++)	//����ָ��ָ��\0
	{
		;
	}

	while (--str != tmp)	//ֻҪstr��û�м���tmp�տ�ʼ����ĳ�ʼλ��
	{
		if (*str == ch)
			return str;
	}

	return NULL;
}

//strcoll�������ܣ��Ƚ��ַ���str1 �� str2, ����strcmp. ����, 
//strcoll() ʹ����Ŀǰ��������setlocale()�趨�Ĵ�����бȽϡ�
int MyStrcoll(const char* dst, const char* src)
{
	assert(dst && src);
	int ret = 0;
	while (!(ret = *dst-*src))
	{
		dst++;
		src++;
	}
	if (ret > 0)
		return 1;
	else if (ret < 0)
		return -1;
	else
		return ret;
}

//*****strcspn�������ܣ���������str1 ��ͷ����n���ַ��������ַ���str2���ַ����ַ�����
size_t MyStrcspn(const char* str1, const char* str2)
{
	assert(str1 && str2);
	size_t count = 0;
	int ret = 0;
	while (!(ret = *str1 - *str2))
	{
		count++;
		str1++;
		str2++;
	}
	return count;
}

//strncat�������ܣ����ַ���from ������count���ַ����ӵ��ַ���to�У�׷�ӿ�ֵ�����������ش�����ɵ��ַ�����
//�ȽϿӵ�һ���ǲ��ܽ����һλҲ����һ���ַ���������ȥ������Ҫ����\0
char* MyStrncat(char* str1, const char* str2,size_t n)
{
	assert(str1 && str2);
	char* tem = str1;

	while (*str1)
	{
		str1++;
	}

	while (n--)
	{
		if (!(*str1++ = *str2++))
		{
			return tem;
		}
		*str1 = '\0';
	}

	return tem;
}

//strncmp�������ܣ��Ƚ��ַ���str1 �� str2������count���ַ���
int MyStrncmp(const char* str1, const char* str2, size_t n)
{
	assert(str1 && str2);
	int ret = 0;
	while (!(ret = *str1 - *str2) && n--)
	{
		++str1;
		++str2;
	}

	if (ret > 0)
	{
		return 1;
	}

	else if (ret < 0)
	{
		return -1;
	}
	return ret;
}

//strncpy�������ܣ����ַ���from ������count���ַ����Ƶ��ַ���to�С�
//����ַ���from �ĳ���С��count�����ಿ����'\0'������ش�����ɵ��ַ�����
char* MyStrncpy(char* str1, const char* str2, size_t n)
{
	assert(str1 && str2);
	if (!n)
		return str1;

	char* tmp = str1;
	while (n && (*str1++ = *str2++))
	{
		n--;
	}
	
	if (n)
	{
		while (n--)
		{
			*str1--;
		}
		str1 = '\0';
	}
	return tmp;
}

//****strpbrk�������ܣ���������һ��ָ�룬��ָ���ַ���str1��������
//�����ַ���str2 �״γ��ֵ�λ�ã���������ڷ���NULL��
const char* MyStrpbrk(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1++)
	{
		while (*str2++)
		{
			if (*str1 == *str2)
			{
				return str2;
			}
		}
	}

	return NULL;
}

//strspn�������ܣ����������ַ���str1�е�һ�����������ַ���str2���ַ���������
size_t MyStrspn(const char* str1, const char* str2)
{
	size_t index = 0;
	while (*str1++ == *str2++)
	{
		index++;
	}
	return index;
}

//strstr�������ܣ���������һ��ָ�룬��ָ���ַ���str2 �״γ������ַ���str1�е�λ�ã����û���ҵ�������NULL��
const char* MyStrstr(const char*str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1)
	{
		if (*str1++ == *str2++)
		{
			;
		}
		++str1;
		return str1;
	}
	return NULL;
}

//strtod�������ܣ��������ش����ŵ��ַ���start����ʾ�ĸ����������ַ���end 
//ָ������ʾ�ĸ�������֮��Ĳ��֡�����������������HUGE_VAL�� -HUGE_VAL��


//strtok�������ܣ����������ַ���str1�н��ӡ���ǡ��Ĳ��ֵ�ָ��, �ַ���str2
//����Ϊ��ǵķָ���������ָ����û���ҵ�����������NULL��Ϊ�˽��ַ���ת����
//��ǣ���һ�ε���str1 ָ����Ϊ��ǵķָ�����֮�����Եĵ���str1 ��ӦΪNULL��


int main()
{
	char str[] = "- This, a sample string.";
	char * pch;
	//printf("Splitting string \"%s\" into tokens:\n", str);
	pch = strtok(str, " ,.-");
	while (pch != NULL)
	{
		printf("%s\n", pch);
		pch = strtok(NULL, " ,.-");
	}
	system("pause");
	return 0;
}




//int main()
//{
//	char str1[] = "12lmo";
//	char str2[10] = "";
//	char *str3 = "lco";
//	char str4[20] = "12lcome";
//
//	//printf("%u\n", MyStrlen1(str1));	//����д��
//	//printf("%u\n", MyStrlen2(str1));	//ָ�����д��
//
//	/*MyStrcpy(str2, str1);
//	printf("%s\n", str2);*/
//
//	/*int ret = MyStrcmp(str1, str3);
//	printf("%d\n", ret);*/
//
//	//printf("%s\n", MyStrcat(str4, str1));
//	
//	//const char* ret = MyStrchr(str1, 'l');
//	//printf("%s\n",ret);
//
//	//const char* ret = MyStrrchr(str1, 'l');
//	//printf("%s\n",ret);
//
//	//printf("%d\n", MyStrcoll(str1,str4));
//
//	//size_t count = strcspn(str1,str4);
//	//printf("%d\n", count);
//
//	//printf("%s\n", MyStrncat(str4, str1, 3));
//
//	//printf("%d\n", MyStrncmp(str1, str3, 2));
//
//	//printf("%s\n", MyStrncpy(str4, str3, 3));
//
//	//****printf("%s\n", strpbrk(str4, str1));
//
//	//printf("%u\n", MyStrspn(str4, str1));
//	
//	//printf("%s\n", MyStrstr(str4, str3));
//
//
//
//	system("pause");
//	return 0;
//}







