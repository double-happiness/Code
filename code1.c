//��һ��С���100�׸߿����£�ÿ�η���ԭ�߶ȵ�һ�룬�ʷ���ʮ��С��������ܸ߶Ⱥ͵�ʮ��С������ĸ߶ȣ�


int main()  
{  
    float totalhight = 100;  
    int count = 0;  
    float ret = 100;  
    float nowhight = 0;  
    for (count = 1; count < 10; count++)  
    {  
        nowhight = ret;  
        ret = nowhight / 2;  
        totalhight += nowhight;  
    }  
    printf("ʮ�ε��ܵĸ߶�Ϊ%fm,��ʮ�ε����ĸ߶�Ϊ%fm\n", totalhight, ret/2);  
    system("pause");  
    return 0;  
}
