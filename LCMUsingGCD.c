#include<stdio.h> /*LCM will be greater than or equal to greatest of both the numbers
                    GCD will be less than the least of both the numbers*///important

int main()
{
    int a,b,gcd,lcm;
    printf("Enter the numbers a and b\n");
    scanf("%d %d",&a,&b);
    for(int i=1; i<a && i<b; i++)
    {
        if(a%i==0 && b%i==0)
            gcd=i;
    }
    lcm=a*b/gcd;
    printf("LCM of %d and %d is %d\n",a,b,lcm);
    return 0;
}
