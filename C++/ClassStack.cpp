class StackType
{
public:
	static StackType* CreateObject()
	{
		return new StackType;
	}

private:
	StackType()
	{}

	StackType(const StackType&); // ֻ����
	StackType& operator=(const StackType&);

	int _a;
};