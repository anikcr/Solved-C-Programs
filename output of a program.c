#include<stdio.h>
int main()
{
    int i=1,j;
    while(i<5){
        printf("%d",i);
        j=1;
        while(j<i){
            printf("%d",j);
            j++;
        }
        printf("\n");
        i++;
    }
}

