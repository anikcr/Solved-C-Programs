#include<stdio.h>
void main()
{
    int year;
    printf("enter a year\n");
    scanf("%d",&year);
    if((year%400)==0)
        printf("%d is leap year/n",year);
        else if((year%100)==0)
            printf("%d is not leap year",year);
         if ((year%4)==0)
        printf("%d is  leap year",year);
        else
            printf("%d year is not leap year",year);


}
