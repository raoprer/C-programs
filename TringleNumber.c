#include<stdio.h>

int main()
{
    int n,trnum=0;

    printf("Enter the number whose triangular number has to be found: ");
    scanf("%d",&n);
    printf("\n");

    for(int i=1;i<=n;i++)
        trnum+=i;
    printf("%d th triangular number is %d",n,trnum);
    return 0;
}

