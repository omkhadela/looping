#include<stdio.h>

main()
{
    int sum=0,n,a=1;
    
    printf("Enter your number :");
    scanf("%d",&n);
    while(a<=n)
    {
       sum=sum+a;
       a++;
    }
    printf("%d\n",sum);
}
