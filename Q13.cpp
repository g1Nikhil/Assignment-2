#include<stdio.h>

int main()
{
    int num;
    int digit,r;

    printf("Enter the number = ");
    scanf("%d",&num);


    digit = num/10;
    r= num%10;
    num = r*100+digit;

    printf("the number %d",num);


    
    return 0;
}