


#include <stdio.h>



void main()

{

    int num1, num2, num3;



    printf("Enter the values of num1, num2 and num3\n");

    scanf("%d %d %d", &num1, &num2, &num3);

    //printf("num1 = %d\tnum2 = %d\tnum3 = %d\n", num1, num2, num3);

    if (num1 > num2)

    {

        if (num1 > num3)

        {

            printf("%d \n",num1);

        }

        else

        {

            printf("%d\n",num3);

        }

    }

    else if (num2 > num3)

        printf("%d\n",num2);

    else

        printf("%d\n",num3);

}
