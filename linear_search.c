#include<stdio.h>
int main()
{
    int a[100],i,flag=0,key,n;
    printf("Enter the array elements \n");
    scanf("%d",&n);
    printf("please enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element you want to search\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%d found at %d\n",key,i+1);
    }
    else printf("%d not found\n",key);
    return 0;
}