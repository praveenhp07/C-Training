#include<stdio.h>
#include<string.h>
void main()
{
    int c=122;
    char s1[10],s2[10];
    sprintf(s1, "%d", c);
    s2=strrev(s1);
    printf("%s",s2);
}
