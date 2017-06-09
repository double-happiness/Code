//有一个小球从100米高空落下，每次反弹原高度的一半，问反弹十次小球下落的总高度和第十次小球下落的高度？


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
    printf("十次的总的高度为%fm,第十次弹跳的高度为%fm\n", totalhight, ret/2);  
    system("pause");  
    return 0;  
}
