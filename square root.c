#include<stdio.h>
void main()
{
    int a[10],sum=0,avg,i,sqrt;
    printf("enter the numbers\n");
    for(i=0;i<10;i++)

    {
        scanf("%d",&a[i]);


    }
    for(i=1;i<10;i++)
    sqrt=a[i]*a[i];
    sum=sqrt+sum;
    avg=sum/10;
    printf("%d\n%d",sum,avg);

}
