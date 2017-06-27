template<typename T>
class AutoPtr
{
public:
	AutoPtr()
	{}

	AutoPtr(T* p)
		: _p(p)
		, _owner(false)	//��ָֹ�뿪ʼʱָ��Ŀռ�Ϊ��
	{
		if (_p)		//���ָ����ָ�Ŀռ䲻Ϊ�գ�����������ÿռ�
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
		//�ͷ�ʱ�ȿ�ָ����ָ��Ŀռ��Ƿ�Ϊ�գ��ڿ��ռ��ʹ�����Ƿ�Ϊ0
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