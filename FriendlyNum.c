//FRIENDLY NUMBERS- Ratio of the sum of divisors to the number is same for 2 given numbers
#include<stdio.h>

int main()
{
    int a,b,ra=0,rb=0;

    printf("Enter the 2 numbers: ");
    scanf("%d %d",&a,&b);

    for(int i=1;i<=a;i++)
        if(a%i==0)
            ra+=i;
    ra=ra/a;

    for(int i=1;i<=b;i++)
        if(b%i==0)
            rb+=i;
    rb=rb/b;

    if(ra==rb)
        printf("\n%d and %d are friendly numbers",a,b);
    else
        printf("\n%d an d%d are not friendly numbers",a,b);
    return 0;
}
