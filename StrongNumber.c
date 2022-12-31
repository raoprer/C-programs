//Sum of the factorial of digits is the same as that of the number
#include<stdio.h>

int main()
{
    int n,fact,st=0,rightmost,num;

    printf("Enter the number: \n");
    scanf("%d",&n);

    num=n;

    while(n>0){
        rightmost=n%10;
        fact=1;
        for(int i=1;i<=rightmost;i++)
            fact*=i;
        st+=fact;
        n/=10;
    }

    if(num==st)
        printf("\n%d is a strong number",num);
    else
        printf("\n%d is not a strong number",num);

    return 0;
}
