#include <stdio.h>

int main()
{
    int k;
    int a;
    int b;
    
    printf("テストと課題の点数は？");
    printf("テスト点数");
    scanf("%d", &a);
    printf("課題の点数");
    scanf("%d", &b);
    k=a+b;
    
    if(k <=59)
    {
        printf("成績がF");
    }
    
    else if(k>=90)
    {
        printf("成績がS");
    }
    
    else if(k >=60 && k <=69)
    {
        printf("成績がC");
    }
    
    else if(k >=69 && k <=79)
    {
        printf("成績がB");
    }
    
    else if(k >=79 && k <=89)
    {
        printf("成績がA");
    }
    
    return 0;
    
}