#include<stdio.h>
int main()
{
    int i,j,x=0;
    for(i=1;i<=4;i++){
        for(j=1;j<=3;j++){
            if(i==j)
                continue;
            printf("i=%d j=%d,",i,j);
            x=x+i+j;
        }
        printf("\nx=%d\n",x);
    }
    printf("\nx=%d",x);

}
