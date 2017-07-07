class BB :public AA
{
};

class CPPA
{
public:
	virtual void f()
	{
		cout<<"CPPA"<<endl;
	}

protected:
	int _a;
};

class CPPB : public CPPA
{
public:
	virtual void f()
	{
		cout<<"CPPB"<<endl;
	}

protected:
	int _b;
};

typedef void(*FUNC)();

struct CA
{
	FUNC f;
	int _a;
};

struct CB
{
	CA _ca;
	int _b;
};

void FuncCA()
{
	cout<<"CA"<<endl;
}

void FuncCB()
{
	cout<<"CB"<<endl;
}

void func(CPPA* ptr)
{
	ptr->f();
}

void func(CA* ptr)
{
	ptr->f();
}

int main()
{


	CPPA cppa;
	CPPB cppb;
	func(&cppa);
	func(&cppb);

	CA ca;
	CB cb;
	ca.f = FuncCA;
	cb._ca.f = FuncCB;

	func(&ca);
	func((CA*)&cb);

	return 0;
}