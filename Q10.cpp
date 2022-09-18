#include<stdio.h>

int main()
{
   int num;

   printf("Enter the number =");

   scanf("%d",&num);

   num = num/10;
   int value = num*10;

   printf("the number is = %d",value);

   return 0;


}