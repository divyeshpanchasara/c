#include<stdio.h>
int gcd(int ,int);
int main()
{
    int x,y;
    printf("enter 2 numbers to find gcd for\n");
    scanf("%d%d",&x,&y);
    int z=gcd(x,y);
    printf("gcd is %d\n",z);
    return 0;
}
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}