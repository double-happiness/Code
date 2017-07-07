#include <iostream>
using namespace std;

class MyString
{
public:
	//MyString()
	//	:_str(new char[1])
	//{
	//	*_str = '\0';
	//}

	//MyString(const char* str)
	//	:_str(new char[strlen(str)+1])
	//{
	//	strcpy(_str, str);
	//}
	MyString(const char* str = "")
		:_str(new char[strlen(str)+1])
	{
		strcpy(_str, str);
	}

	// s3(s1)
	MyString(const MyString& s)
	{
		_str = new char[strlen(s._str) + 1];
		strcpy(_str, s._str);
	}

	// s3 = s1
	// s3 = s3
	MyString& operator=(const MyString& s)
	{
		if (this != &s)
		{
			delete[] _str;
			_str = new char[strlen(s._str)+1];
			strcpy(_str, s._str);
		}

		return *this;
	}

	//	s1(s2)
	//	s1 = s2;

	~MyString()
	{
		delete[] _str;
	}

	// c_str()
	const char* GetStr()
	{
		return _str;
	}

private:
	char* _str;
};

 String
 传统写法 -- 老实人
 现代写法 -- 资本主义

class MyString
{
public:
	MyString(const char* str = "")
		:_str(new char[strlen(str)+1])
	{
		strcpy(_str, str);
	}

	 s3(s1)
	MyString(const MyString& s)
		:_str(NULL)
	{	
		MyString tmp(s._str);
		swap(_str, tmp._str);
	}

	 i = j;
	 s1 = s3 s1.operator=(&s1, s3)
	MyString& operator=(MyString s)
	{
		swap(this->_str, s._str);
		return *this;
	}
	MyString& operator=(const MyString& s)
	{
		if (this != &s)
		{
			MyString tmp(s._str);
			swap(_str, tmp._str);
		}

		return *this;
	}

	~MyString()
	{
		delete[] _str;
	}

	 c_str()
	const char* GetStr()
	{
		return _str;
	}

private:
	char* _str;
};

int main()
{
	/*MyString s1("hello");
	MyString s2;

	MyString s3(s1);
	cout<<s1.GetStr()<<endl;
	cout<<s3.GetStr()<<endl;*/

	/*s2 = s3;
	cout<<s2.GetStr()<<endl;

	s3 = s3;
	cout<<s3.GetStr()<<endl;*/

	static int a = 10;
	++a;

	return 0;
}