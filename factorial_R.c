#include <stdio.h>
long fact(long);
int main()
{
    long int n;
    printf("enter number to find factorial\n");
    scanf("%ld",&n);
    long int ans;
    ans=fact(n);
    printf("The factorial of %ld is %ld\n",n,ans);
    return 0;
}
long fact(long x)
{
    if(x==0||x==1)
        return 1;
    else
        return x*fact(x-1);
}