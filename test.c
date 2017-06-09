//水仙花数

#include<stdio.h>  
int main()  
{  
    int i=0;  
    int j=0;  
    int k=0;  
    int n=0;  
    for(n=0; n<1000; n++)  
    {  
        i=n/100;  
        j=(n-i*100)/10;  
        k=n%10;  
        if(n==i*i*i+j*j*j+k*k*k)  
            printf("%d是水仙花数\n",n);  
    }  
    return 0;  
}