template<typename T>
class ScopedArray
{
public:
	ScopedArray()
	{}

	ScopedArray(T* ptr)
		: _p(ptr)
	{}

	~ScopedArray()
	{
		if (_p != NULL)
		{
			delete[] _p;
			_p = NULL;
		}
	}

	T operator*()
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

	T& operator[](size_t index)		//对于[]这个运算符需要成对的重载
	{
		return _p[index];
	}

	const T& operator[](size_t index)const
	{
		return _p[index];
	}
private:
	ScopedArray(const ScopedArray<T>& sp);
	ScopedArray& operator=(const ScopedArray<T>& sp);
	T* _p;
};