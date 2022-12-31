#include<stdio.h>

int main()
{
    int n,a[10][10],temp;
    printf("Enter the order of the matrix\n");
    scanf("%d",&n);
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    //SWAP
    for(int i=0;i<n;i++)
    {
        temp=a[i][i];
        a[i][i]=a[i][n-i-1];
        a[i][n-i-1]=temp;

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d    ",a[i][j]);
        printf("\n");
    }
    return 0;
}
