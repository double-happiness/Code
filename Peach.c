//从前有一群群猴从果园里采来了许多桃子，第一天吃掉采来桃子的一半之后，猴王又多吃了了一个，第二天吃掉了剩下的一半之后，猴王又多吃了一个，一直到第十天猴子们去吃桃子时只剩下一个桃子了，问刚开始时猴子们总共采来了多少桃子？

#include<stdio.h>  
int main()  
{  
    int total = 0;  
    int rest = 1;  
    for (int i = 9; i>0; i--)  
    {  
        total = (rest + 1) * 2;  
        rest = total;  
    }  
    printf("总的桃子个数为%d\n", total);  
    system("pause");  
    return 0;  
}