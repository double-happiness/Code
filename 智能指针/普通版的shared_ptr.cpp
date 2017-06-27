template<typename T>
class SharedPtr
{
public:
	SharedPtr()
	{}

	SharedPtr(T* ptr)
		: _p(ptr)
		, _pCount(NULL)	
	{
		if (_p)//防止指针刚开始指向的内存空间为空
			_pCount = new int;
	}

	SharedPtr(const SharedPtr<T>& sp)
		: _p(sp._p)
		, _pCount(sp._pCount)
	{
		_p = sp._p;
		_pCount = sp._pCount;
		++(*_pCount);
	}

	SharedPtr<T>& operator=(SharedPtr<T> sp)
	{
		swap(sp._p, _p);
		swap(sp._pCount, _pCount);
		return *this;
	}

	~SharedPtr()
	{
		if (NULL != _p && 0 == --(*_pCount))
		{
			delete _p;
			delete _pCount;
			_p = NULL;
			_pCount = NULL;
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

	int GetUseCount()
	{
		return *_pCount;
	}
private:
	T* _p;
	int* _pCount;
};