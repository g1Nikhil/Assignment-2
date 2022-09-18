#include<stdio.h>

int main()
{
    int num;

    scanf(" %d",&num);

    int unit = num % 10;

    printf("The unit digit of num = %d",unit);

    return 0;
}