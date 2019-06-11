#include<stdio.h>
void main()
{
    int a[20],i,j,n,temp;
    printf("enter the limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
      for(i=0;i<n;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
}
