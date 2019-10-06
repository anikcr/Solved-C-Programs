#include<stdio.h>
void main()

{
    int n,i,p,temp;
    int a[100];
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);

    }


    scanf("%d",&p);
    n=n-1;
    scanf("%d",&temp);
    for(i=n;i>=p;i--)
    {
        a[i+1]=a[i];
    }
    a[p]=temp;
    n=n+1;
    for(i=0;i<1;i++)
    {
        printf("%d",a[i]);
    }
}


