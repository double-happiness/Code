#include<iostream>
using namespace std;

//����ָ�룺��ɶ���ĳ�ʼ��������

//ֻ�ǽ��м򵥵���ԴȨת��
//����ʱ��������ָ��ָ��ͬһ���ڴ棬�ͻ����
//�����ڿ�������͸�ֵ������н�ԭ��ָ��Ŀռ��жϣ�����Ȼ�ǲ������

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

	//ֻ�����ڽ�����ָ�����ڹ���һ�οռ�����
	//���һ�οռ䱻�������������ʱ�ͻ����
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