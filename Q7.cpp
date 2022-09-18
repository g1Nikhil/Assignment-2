#include<stdio.h>

int main()
{
    int num ;

    printf("Enter the no. = ");

    scanf("%d",&num);

    num = num%10;

    printf("The LSB is = %d",num);

    return 0;
}