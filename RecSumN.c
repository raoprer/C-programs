#include<stdio.h>
int sum(int n)
{
    if(n==0)
        return 0;
    return n+sum(n-1);
}
int main()
{
    int n;
    printf("Enter the value ");
    scanf("%d",&n);
    printf("The sum is %d",sum(n));
    return 0;
}
