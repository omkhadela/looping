#include<stdio.h>
main()
{
    int i=1,a;
    printf("Enter your number :");
    scanf("%d",&a);
    while(i<=10)
    {
       printf("%d * %d=%d\n",i,a,i*a);
       i++;
	}
}
