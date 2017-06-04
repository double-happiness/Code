#include<iostream>  
using namespace std;
#include<cmath>  

bool IsPrime(int num)   //num为我们要判断的数  
{
	//for (int i = 2; i < num - 1; i++)      //最传统的方式  
	//for (int i = 2; i < num/2; i++)        //只判断一半的方式  
	for (int i = 2; i < sqrt(num); i++)      //最优化的判断方式  
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
	cout << "请输入你要判断的数:";
	cin >> num;
	if (IsPrime(num))
	{
		cout << num << "是素数" << endl;
	}
	else
	{
		cout << num << "不是素数" << endl;
	}
	system("pause");
	return 0;
}