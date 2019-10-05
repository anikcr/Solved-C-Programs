#include<stdio.h>
void main()
{
    int a[10],sum=0,i,avg;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<10;i++)
        sum=sum+a[i];
    avg=sum/10;

    printf("%d\n%d",sum,avg);
