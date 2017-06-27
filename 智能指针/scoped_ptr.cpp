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
	//ScopedPtr<int> sp2(sp1);	//因为是防拷贝的所以该句编译出错；
	ScopedPtr<int> sp3;
	//sp3 = sp1;	//编译同样会出错，因为赋值运算符的重载也是防拷贝的
}