#include<stdio.h>

int main()
{
    int n,num,sum,rightmost;

    printf("Enter the number: ");
    scanf("%d",&n);
    num=n;

    while(n>9){
        sum=0;
        while(n>0){
            rightmost=n%10;
            sum+=rightmost;
            n/=10;
        }
        n=sum;
    }
    printf("\nThe generic root of %d is %d",num,n);
    return 0;
}
