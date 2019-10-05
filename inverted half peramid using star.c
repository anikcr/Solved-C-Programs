#include<stdio.h>
void main()
{
    int i,j;
    for(i=8;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
