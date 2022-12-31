#include<stdio.h>

int main()
{
    int n,m,a[10][10],rowSum[10],colSum[10];
    printf("Enter the order of the matrix\n");
    scanf("%d %d",&n,&m);
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    //ROW SUM
    for(int i=0;i<n;i++)
    {
        rowSum[i]=0;
        for(int j=0;j<m;j++)
            rowSum[i]+=a[i][j];
    }
    //COLUMN SUM
    for(int j=0;j<m;j++)
    {
        colSum[j]=0;
        for(int i=0;i<n;i++)
            colSum[j]+=a[i][j];
    }
    //PRINTING
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%5d",a[i][j]);
        printf("  - %5d",rowSum[i]);
        printf("\n");
    }
    for(int j=0;j<m;j++)
            printf("    |");
    printf("\n");
    for(int j=0;j<m ;j++)
        printf("%5d",colSum[j]);
    return 0;
}
