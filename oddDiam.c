#include<stdio.h>
void main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf(" *");
        }
        printf("\n");
        }
    }
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=n;k>i;k--)
        {
            printf(" *");
        }
        printf("\n");
        }
    }
}
