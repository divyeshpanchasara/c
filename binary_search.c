#include<stdio.h>
int main()
{
    int a[100],n,i,high,low,mid,key;
    printf("enter the total array elements\n");
    scanf("%d",&n);
    printf("enter all the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the key element\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while (low<=high)
    {
        mid=(high+low)/2;
        if(key==a[mid])
        {
            printf("%d found at %d\n",key,mid+1);
            break;
        } 
        else if(key>a[mid])
        {
            low=mid+1;
        }
        else high=mid-1;
        if(low>high)
        printf("not found\n");
    }
    return 0;
}