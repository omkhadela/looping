#include<stdio.h>
main()
{
   int n=1,a;
   printf("Enter your number :");
   scanf("%d",&a);

   while (n<=a)
   {
    if(n%2!=0)
    printf("%d ",n);
    n++;
   }

}
