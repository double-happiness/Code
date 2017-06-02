#include<stdio.h>  
  
struct IP  
{  
    union UN  
    {  
        struct Ip  
        {  
            unsigned char b1;  
            unsigned char b2;  
            unsigned char b3;  
            unsigned char b4;  
        }ip;  
        unsigned long num;  
    }un;  
};  
  
int main()  
{  
    unsigned long value = 1234567890;  
    struct IP myIp;  
    myIp.un.num = value;  
    printf("ÎÒµÄIPÊÇ£º%d.%d.%d.%d\n",  
            myIp.un.ip.b1,  
            myIp.un.ip.b2,  
            myIp.un.ip.b3,  
            myIp.un.ip.b4);  
  
    system("pause");  
    return 0;  
}