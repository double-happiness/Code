#include<stdio.h>    
int fun(int n,int k)    
{    
    int num;    
    if(k==1)    
    {    
        num=n;    
    }    
    if(k>1)    
    {    
        num=n*fun(n,k-1);    
        k--;    
    }    
    return num;    
}    
int main()    
{    
    int n=0;  
    int k=0;  
    int ret=0;  
    scanf("%d%d",&n,&k);  
    ret=fun(n,k);  
  printf("%d\n",ret);    
  return 0;    
}  