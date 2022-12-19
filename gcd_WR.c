#include <stdio.h>
int main()
{
    int a,b,gcd;
    printf("Enter 2 numbers for gcd\n");
    scanf("%d%d",&a,&b);
    int k;
    if(a>b)
        k=a;
    else
        k=b;
    for(int i=1;i<=k;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("The gcd is %d",gcd);
    return 0;
}