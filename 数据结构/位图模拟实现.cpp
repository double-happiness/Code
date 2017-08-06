#include<iostream>
#include<vector>
using namespace std;

class BitSet
{
public:
	BitSet(size_t n)
	{
		vec.resize((n >> 5 + 1), 0);
	}
	void Set(size_t n)		//设置
	{
		int index = n >> 5;		//先计算该数要插入的区间
		int pos = n % 32;		//计算该数在该区间的那个位置
		vec[index] |= 1 << pos;
	}

	void ReSet(size_t n)	//去设置
	{
		int index = n >> 5;
		int pos = n % 32;
		vec[index] &= ~(1 << pos);
	}

	bool Test(size_t n)		//判断是否被设置
	{
		int index = n >> 5;
		int pos = n % 32;
		return vec[index] & 1 << pos;
	}
private:
	vector<size_t> vec;
};
