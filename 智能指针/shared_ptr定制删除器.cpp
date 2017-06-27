class Fclose
{
public:
	void operator()(void *ptr)
	{
		fclose((FILE *)ptr);
		cout << "fclose()" << endl;
	}
};
struct Free
{
public:
	void operator()(void *ptr)
	{
		free(ptr);
		cout << "free()" << endl;
	}
};
//Ä¬ÈÏÉ¾³ýÆ÷ÊÇdelete
class DefaultDel
{
public:
	void operator()(void* ptr)
	{
		delete ptr;
		cout << "delete ptr" << endl;
	}
};
template<typename T, typename D = DefaultDel>
class SharedPtr            
{
public:
	SharedPtr(T* ptr, D del = DefaultDel())
		SharedPtr<T, D>::SharedPtr(T* ptr, D del)
		:_ptr(ptr)
		, _pCount(new int(1))
		, _del(del)
	{}
	
	SharedPtr(const SharedPtr<T, D>& sp)
	{
		_ptr = sp._ptr;
		_pCount = sp._pCount;
		++(*_pCount);
	}

	SharedPtr<T, D>& operator=(SharedPtr<T, D> sp)
	{
		std::swap(sp._ptr, _ptr);
		std::swap(sp._pCount, _pCount);
		return *this;
	}

	T& operator*()
	{
		return *_ptr;
	}

	T* operator->()
	{
		return _ptr;
	}

	~SharedPtr()
	{
		if (--(*_pCount) == 0)
		{
			_del(_ptr);
			delete _pCount;
			_ptr = NULL;
			_pCount = NULL;
		}
	}
	int Count()
	{
		return *_pCount;
	}
private:
	T* _ptr;
	int* _pCount;
	D _del;
};
