int CountOneBit(int num)  		//����һ������������1�ĸ���
{  
    int count = 0;  
    /*for (int i = 31; i > 0; i++)   //һ���ʵ�ַ�ʽ  
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
        num &= (num - 1);   //�㷨ת��  
    }  
    return count;  
}  
  
int main()  
{  
    int value = 25;  
    int ret = CountOneBit(value);  
    printf("%d�еĶ�����λ1�ĸ�����%d\n",value, ret);  
    system("pause");  
    return 0;  
}



int CountZeroBit(int num)  		//����һ������������0�ĸ���
{  
    int count = 0;  
    /*for (int i = 31; i > 0; i++)   //һ���ʵ�ַ�ʽ  
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
        num |= (num + 1);   //�㷨ת��  
    }  
    return count;  
}  
  
int main()  
{  
    int value = 25;  
    int ret = CountZeroBit(value);  
    printf("%d�Ķ�����λ��0�ĸ���Ϊ%d\n",value, ret);  
    system("pause");  
    return 0;  
}