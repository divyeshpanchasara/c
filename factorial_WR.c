#include<stdio.h>
int main()
{
    int n,i;
    long fact=1;
    printf("enter number to find factorial\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is %ld",n,fact);
    return 0;
}