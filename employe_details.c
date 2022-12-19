#include <stdio.h>
struct  employee
{
    char name[30];
    int idno;
    float basic_pay,allowence,deduction,netpay;
};
int main()
{
    int i,j,n;
    struct employee e[1000];
    printf("total number of employees\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Name of the employee\n");
        scanf("%s",e[i].name);
        printf("Eter Id nummber\n");
        scanf("%d",&e[i].idno);
        printf("Basic pay of the empolyee\n");
        scanf("%f",&e[i].basic_pay);
        printf("Allowence of the empolyee\n");
        scanf("%f",&e[i].allowence);
        printf("Deduction if any of the empolyee\n");
        scanf("%f",&e[i].deduction);
        e[i].netpay=e[i].basic_pay+e[i].allowence-e[i].deduction;
    }
    printf(" Name of the employee\t\tID number\tNet Pay\n\n");
    for(i=0;i<n;i++)
    {
        printf(" %s\t\t\t%d\t\t%0.3f\n\n",e[i].name,e[i].idno,e[i].netpay);
    }
    return 0;
}
