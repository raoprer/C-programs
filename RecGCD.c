#include<stdio.h>
int gcd(int x,int y)
{
    if(x==0)
        return y;
    if(y==0)
        return x;
    return gcd(y,x%y);
}
int main()
{
    int a,b;
    printf("Enter the 2 numbers to find GCD ");
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
    return 0;
}
