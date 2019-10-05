#include<stdio.h>
void main()
{
    int a[14],sum=0,avg,i;
    for(i=0;i<14;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
        sum=sum+a[i];
    avg=sum/10;

    printf("%d\n%d",sum,avg);
}
