#include<iostream>
using namespace std;

//智能指针：完成对象的初始化和析构

//只是进行简单的资源权转移
//析构时由于两个指针指向同一块内存，就会出错
//若是在拷贝构造和赋值运算符中将原来指针的空间切断，但显然是不合理的

template<typename T>
class AutoPtr
{
public:
	AutoPtr(T* p)
		:_p(p)
	{}

	AutoPtr(AutoPtr<T>& ap)
		: _p(ap._p)
	{
		ap._p = NULL;
	}

	//只适用于将智能指针用于管理一段空间的情况
	//如果一段空间被多个对象来管理时就会出错
	AutoPtr<T>& operator=(AutoPtr<T>& ap)
	{
		if (this != &ap)
		{

		}
		return *this;
	}

	~AutoPtr()
	{
		if (_p != NULL)
		{
			delete _p;
			_p = NULL;
		}
	}

	T& operator*()
	{
		return *_p;
	}

	T* operator->()
	{
		return _p;
	}

	T* Get()
	{
		return _p;
	}
protected:
	T* _p;
};