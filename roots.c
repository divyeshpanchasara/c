#include<stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d,root1,root2;
    printf("enter the values of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>=0)
    {
        float k;
        k=sqrt(d);
        root1=((-b)+k)/(2*a);
        root2=((-b)-k)/(2*a);
        printf("the roots are %0.2f and %0.2f",root1,root2);
    }
    else
    {
        float k,realpart,imgpart;
        k=sqrt(-d);
        realpart= -b/2*a;
        imgpart= k/2*a;
        printf("the roots are %0.2f +i %0.2f and %0.2f -i %0.2f",realpart,imgpart,realpart,imgpart);
    }
    return 0;
}