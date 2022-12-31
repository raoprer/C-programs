#include<stdio.h>

int main()
{
    int n,k=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    while(k<n){
        for(int i=n-k-1;i>=0;i--)//loop for printing spaces
            printf(" ");
        for(int j=k;j>=0;j--)
            printf("%d",j);
        for(int j=1;j<=k;j++)
            printf("%d",j);
        printf("\n");
        k++;
    }
    return 0;
}
