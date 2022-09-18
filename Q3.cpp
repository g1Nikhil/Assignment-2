#include<stdio.h>

int main()
{
    int a = 4;
    int b = 5;
    int c;

    c = a;
    a = b;
    b = c;

    printf("the value of a = %d\nthe value of b = %d",a,b);

    return 0;

}