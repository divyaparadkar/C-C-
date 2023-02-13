#include<stdio.h>
#include<conio.h>

int main()
{
    int a[5];
    int i,j,temp;
    printf("Enter the array");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
      for(i=0;i<=5;i++)
    {
            for(j=i+1;j<=5;j++)
            {
                if(a[i]<a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;

                }
            }
            
    }
    
    printf("The array is ");
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
