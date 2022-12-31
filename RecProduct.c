#include<stdio.h>
int prod(int a,int b)
{
    if(b==0)
        return 0;
    return (a+prod(a,b-1));
}
int main()
{
    int a,b;
    printf("Enter the numbers whose product has to be calculated ");
    scanf("%d %d",&a,&b);
    printf("%d * %d = %d",a,b,prod(a,b));
    return 0;
}
