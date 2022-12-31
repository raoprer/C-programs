#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num, rev=0, rightmost;
    printf("Enter a number\n");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        rightmost=n%10;
        rev=rev*10+rightmost;
        n=n/10;
    }
    if(num==rev)
        printf("The number %d is a palindrome", rev);
    else
        printf("The number is not a palindrome. Reverse is %d",rev);
    return 0;
}
