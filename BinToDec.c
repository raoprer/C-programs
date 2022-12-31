#include<stdio.h>
#include<math.h>

int main()
{
    int bin,dec=0,rightmost,n,i=0;

    printf("Enter the binary number: ");
    scanf("%d",&bin);
    n=bin;

    while(n>0){
        rightmost=n%10;
        dec+=rightmost*pow(2,i);
        n/=10;
        i++;
    }
    printf("\nThe decimal equivalent  of %d is %d",bin,dec);
    return 0;
}
