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

	StackType(const StackType&); // Ö»ÉùÃ÷
	StackType& operator=(const StackType&);

	int _a;
};