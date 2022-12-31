#include<stdio.h>

int main()
{
    int isprime=1,n;
    printf("Enter a number which has to be verified as prime or not \n");
    scanf("%d",&n);
    for(int i=2; i<=n/2; i++) //take i=2!
    {
        if(n%i==0)
            isprime=0;
    }
    if(isprime)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
    return 0;
}
