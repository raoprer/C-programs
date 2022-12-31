#include<stdio.h>/*LCM will be greater than or equal to greatest of both the numbers
                   GCD will be less than the least of both the numbers*///important


int main()
{
    int a,b,max_div,flag=1;
    printf("Enter the numbers a and b\n");
    scanf("%d %d",&a,&b);
    if(a>b)
        max_div=a;
    else
        max_div=b;

    while(flag)
    {
        if(max_div%a==0 && max_div%b==0) //Both a and b will divide LCM completely
        {
            printf("LCM of %d and %d is %d",a,b,max_div);
            break; //Important
        }
        max_div++;
    }
    return 0;
}
