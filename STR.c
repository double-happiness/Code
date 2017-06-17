#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

//strlen——功能：函数返回字符串str 的长度( 即空值结束符之前字符数目)。

size_t MyStrlen1(const char* str)	//加const防止str被修改
{
	assert(str);		//断言，防止str为空指针或者野指针的情况
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


//strcpy——功能：复制字符串from 中的字符到字符串to，包括空值结束符。返回值为指针to
char* MyStrcpy(char* dst, const char* src)		//src为原字符串，dst为目标字符串
{
	assert(src && dst);
	char* ret = dst;	//先让ret保存dst的起始位置
	while (*dst++ = *src++)		//将src中的值一次拷贝到dst之中
	{
		;
	}
	return dst;
}

//strcmp——功能：比较字符串str1 and str2
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

//strcat——功能：函数将字符串str2 连接到str1的末端，并返回指针str1
char* MyStrcat(char *src, const char*dst)
{
	assert(src && dst);
	int count = 0;
	char* ret = src;
	while (*src)	//如果把++合并写到上面来会多加一次
	{
		src++;
	}
	while (*src++ = *dst++)
	{
		;
	}
	return ret;
}

//strchr——功能：函数返回一个指向str 中ch 首次出现的位置，当没有在str 中找ch到返回NULL

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

//strrchr——功能：函数返回一个指针，它指向字符ch 在字符串str
//末次出现的位置，如果匹配失败，返回NULL
const char* MyStrrchr(const char* str,char ch)
{
	assert(str);
	const char* tmp = str;
	while (*str++)	//先让指针指向\0
	{
		;
	}

	while (--str != tmp)	//只要str还没有减到tmp刚开始保存的初始位置
	{
		if (*str == ch)
			return str;
	}

	return NULL;
}

//strcoll——功能：比较字符串str1 和 str2, 很象strcmp. 但是, 
//strcoll() 使用在目前环境中由setlocale()设定的次序进行比较。
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

//*****strcspn——功能：函数返回str1 开头连续n个字符都不含字符串str2内字符的字符数。
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

//strncat——功能：将字符串from 中至多count个字符连接到字符串to中，追加空值结束符。返回处理完成的字符串。
//比较坑的一点是不能将最后一位也用另一个字符串拷贝进去，而是要换成\0
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

//strncmp——功能：比较字符串str1 和 str2中至多count个字符。
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

//strncpy——功能：将字符串from 中至多count个字符复制到字符串to中。
//如果字符串from 的长度小于count，其余部分用'\0'填补。返回处理完成的字符串。
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

//****strpbrk——功能：函数返回一个指针，它指向字符串str1中任意字
//符在字符串str2 首次出现的位置，如果不存在返回NULL。
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

//strspn——功能：函数返回字符串str1中第一个不包含于字符串str2的字符的索引。
size_t MyStrspn(const char* str1, const char* str2)
{
	size_t index = 0;
	while (*str1++ == *str2++)
	{
		index++;
	}
	return index;
}

//strstr——功能：函数返回一个指针，它指向字符串str2 首次出现于字符串str1中的位置，如果没有找到，返回NULL。
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

//strtod——功能：函数返回带符号的字符串start所表示的浮点型数。字符串end 
//指向所表示的浮点型数之后的部分。如果溢出发生，返回HUGE_VAL或 -HUGE_VAL。


//strtok——功能：函数返回字符串str1中紧接“标记”的部分的指针, 字符串str2
//是作为标记的分隔符。如果分隔标记没有找到，函数返回NULL。为了将字符串转换成
//标记，第一次调用str1 指向作为标记的分隔符。之后所以的调用str1 都应为NULL。


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
//	//printf("%u\n", MyStrlen1(str1));	//计数写法
//	//printf("%u\n", MyStrlen2(str1));	//指针相减写法
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







