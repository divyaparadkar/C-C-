#include<stdio.h>
#include<conio.h>

int main()
{
    int  a[10], sum=0,i;
    float avg;

    printf("Enter 10 elements");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

    for(i=0;i<=9;i++)
    sum=sum+a[i];
    avg =sum /10.0;
    printf("The average is %d",avg);
}
