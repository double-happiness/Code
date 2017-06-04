int CountOneBit(int num)  		//计算一个二进制数中1的个数
{  
    int count = 0;  
    /*for (int i = 31; i > 0; i++)   //一般的实现方式  
    {  
        if (num % 2 == 1)  
        {  
            count++;  
        }  
        else  
        {  
            continue;  
        }  
    }*/  
    while (num)  
    {  
        count++;  
        num &= (num - 1);   //算法转换  
    }  
    return count;  
}  
  
int main()  
{  
    int value = 25;  
    int ret = CountOneBit(value);  
    printf("%d中的二进制位1的个数有%d\n",value, ret);  
    system("pause");  
    return 0;  
}



int CountZeroBit(int num)  		//计算一个数二进制中0的个数
{  
    int count = 0;  
    /*for (int i = 31; i > 0; i++)   //一般的实现方式  
    {  
        if (num % 2 == 0)  
        {  
            count++;  
        }  
        else  
        {  
            continue;  
        }  
    }*/  
    while (num + 1)  
    {  
        count++;  
        num |= (num + 1);   //算法转换  
    }  
    return count;  
}  
  
int main()  
{  
    int value = 25;  
    int ret = CountZeroBit(value);  
    printf("%d的二进制位中0的个数为%d\n",value, ret);  
    system("pause");  
    return 0;  
}