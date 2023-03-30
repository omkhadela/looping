#include<stdio.h>
main()
{
   int n,fact=1;
   printf("Enter your number :");
   scanf("%d",&n);

   while (n>0)
   {
    fact=fact*n;
    printf("%d ",n);
    n--;
   }
   printf("\nThe factorial of all number is :%d",fact);

}
