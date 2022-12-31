#include<stdio.h>

int main()
{
    int n,sum=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=1;i<=n/2;i++){
        if(n%i==0)
            sum+=i;
    }

    if(n==sum)
        printf("\nThe number %d is a perfect number",n);
    else
        printf("The number %d is not a perfect number",n);
    return 0;

}
