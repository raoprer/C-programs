#include<stdio.h>//print n tables up to k terms

int main()
{
    int n, k, i, j, prod;//number of rows is i and number of columns is k
    printf("Enter n and k\n");
    scanf("%d %d",&n, &k);
    for(i=1; i<=k; i++)//rows
    {
        for(j=1; j<=n;j++)//columns
        {
            prod=i*j;
            printf("%d x %d = %d\t", i, j, prod);
        }
        printf("\n");
    }
}
