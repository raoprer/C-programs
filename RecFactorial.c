#include<stdio.h>
int fact(int n)
{
    if(n==0||n==1)
        return n;
    return (n*fact(n-1));
}
int main()
{
    int n;
    printf("Enter the number whose factorial has to be calculated ");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}
