#include<stdio.h>


void main()
{
    int a=1;
    int b=2;
    int c,i;
    printf("%d\n%d", a,b);
    for(i=3;i<=10;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\n%d", c);
    }
}