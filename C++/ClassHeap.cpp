
#include <iostream>
using namespace std;

class HeapType
{
public:
	static HeapType* CreateObject()
	{
		return new HeapType;
	}

private:
	HeapType()
	{}

	HeapType(const HeapType&); // Ö»ÉùÃ÷
	HeapType& operator=(const HeapType&);

	int _a;
};