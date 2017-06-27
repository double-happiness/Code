template<typename T>
class ScopedPtr
{
public:
	ScopedPtr()
	{}

	ScopedPtr(T* ptr)
		: _p(ptr)
	{}

	~ScopedPtr()
	{
		if (_p != NULL)
			delete _p;
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
private:
	ScopedPtr(const ScopedPtr<T>& sp);
	ScopedPtr& operator=(const ScopedPtr<T>& sp);

	T* _p;
};

void FunTest()
{
	ScopedPtr<int> sp1;
	//ScopedPtr<int> sp2(sp1);	//��Ϊ�Ƿ����������Ըþ�������
	ScopedPtr<int> sp3;
	//sp3 = sp1;	//����ͬ���������Ϊ��ֵ�����������Ҳ�Ƿ�������
}