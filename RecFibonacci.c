#include<stdio.h>//PRINT N FIBO NUMBERS...IF YOU WANT NTH FIBO VALUE DO NOT PUT LOOP...(Same applies to all rec problems)
fib(int n)
{
    if(n==0||n==1)
        return n;
    return (fib(n-1)+fib(n-2));
}
int main()
{
    int i,r,fibo;
    printf("Enter the range\n");
    scanf("%d",&r);
    for(i=0;i<r;i++)
        printf("%d     ",fib(i));
    return 0;
}
