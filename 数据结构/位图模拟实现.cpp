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
	void Set(size_t n)		//����
	{
		int index = n >> 5;		//�ȼ������Ҫ���������
		int pos = n % 32;		//��������ڸ�������Ǹ�λ��
		vec[index] |= 1 << pos;
	}

	void ReSet(size_t n)	//ȥ����
	{
		int index = n >> 5;
		int pos = n % 32;
		vec[index] &= ~(1 << pos);
	}

	bool Test(size_t n)		//�ж��Ƿ�����
	{
		int index = n >> 5;
		int pos = n % 32;
		return vec[index] & 1 << pos;
	}
private:
	vector<size_t> vec;
};
