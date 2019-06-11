#include<stdio.h>
int main()
{
    long long int a,i,fact=1;
    scanf("%lld",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %lld is %lld",a,fact);
    return 0;
}
