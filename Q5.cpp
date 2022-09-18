#include<stdio.h>

int main()
{
    int a = 123;
    int rem = 0, sum = 0;

   
    rem = a%10;
    a = a/10;
    sum = sum + rem;

     rem = a%10;
    a = a/10;
    sum = sum + rem;

     rem = a%10;
    a = a/10;
    sum = sum + rem;

printf("%d",sum);
    

    return 0;

    
}