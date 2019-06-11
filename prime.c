#include<stdio.h>
void main()
{
int n,i,p=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if((n%i)==0)
    {
        p++;
    }
}
if(p==2)
    printf("prime");
else
    printf("not a prime");
}
