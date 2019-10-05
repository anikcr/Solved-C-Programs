#include<stdio.h>
void main()
{
    int i,n,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
    if(r==n)
    {
        printf("%d",n);
    }
    else
        printf("%d",n);
}
