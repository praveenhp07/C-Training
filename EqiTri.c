#include<stdio.h>
void main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf(" *");
        }
        printf("\n");
        }
    }
}
