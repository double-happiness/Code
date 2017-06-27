template<typename T>
class AutoPtr
{
public:
	AutoPtr()
	{}

	AutoPtr(T* p)
		: _p(p)
		, _owner(false)	//防止指针开始时指向的空间为空
	{
		if (_p)		//如果指针所指的空间不为空，则由它管理该空间
			_owner = true;
	}

	AutoPtr(AutoPtr<T>& ap)
		: _p(ap._p)
		, _owner(ap._owner)
	{
		ap._owner = false;
	}

	AutoPtr<T>& operator=(AutoPtr<T>& ap)
	{
		if (_p != ap._p)
		{	
			if (_owner)
			{
				delete _p;
			}
			_p = ap._p;
			_owner = true;
			ap._owner = false;
		}
		return *this;
	}

	~AutoPtr()
	{
		//释放时先看指针所指向的空间是否为空，在看空间的使用者是否为0
		if (_p != NULL)	
		{
			delete _p;
			_p = NULL;
			_owner = false;
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
	bool _owner;
};