#include <stdio.h>
int main()
{
    int a[100],i,j,n,temp;
    printf("enter the total array elements\n");
    scanf("%d",&n);
    printf("enter %d array elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nThe sorted array elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n%d is the min\n",a[0]);
    printf("\n%d is the maximum\n ",a[n-1]);
    return 0;
}
