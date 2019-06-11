#include<stdio.h>
void main()
{
    int n,rem;
    scanf("%d",&n);
    int org=n;
    int rev=0;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(org==rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
