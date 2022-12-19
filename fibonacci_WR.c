#include<stdio.h>
int main()
{
    int f1=0,f2=1,f3,limit;
    printf("Enter the limit for fibonacci series\n");
    scanf("%d",&limit);
    for(int i=0;i<limit;i++)
    {
        f3=f1+f2;
        printf("%d\t",f3);
        f1=f2;
        f2=f3;
    }
    return 0;
}