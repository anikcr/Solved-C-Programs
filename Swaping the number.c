#include<stdio.h>
// function prototype, also called function declaration
void swap(int a, int b);

int main()
{
    int m = 22, n = 44 ,tmp;
    // calling swap function by value
    printf(" values before swap  m = %d \nand n = %d", m, n);
    swap(m, n);
}

void swap(int a, int b)
{

    tmp = a;
    a = b;
    b = tmp;
    printf(" \nvalues after swap m = %d\n and n = %d", a, b);
}
