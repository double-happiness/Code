#include<iostream>  
using namespace std;
#include<cmath>  

bool IsPrime(int num)   //numΪ����Ҫ�жϵ���  
{
	//for (int i = 2; i < num - 1; i++)      //�ͳ�ķ�ʽ  
	//for (int i = 2; i < num/2; i++)        //ֻ�ж�һ��ķ�ʽ  
	for (int i = 2; i < sqrt(num); i++)      //���Ż����жϷ�ʽ  
	{
		if (num%i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int num = 0;
	cout << "��������Ҫ�жϵ���:";
	cin >> num;
	if (IsPrime(num))
	{
		cout << num << "������" << endl;
	}
	else
	{
		cout << num << "��������" << endl;
	}
	system("pause");
	return 0;
}