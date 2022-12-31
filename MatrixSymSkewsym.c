#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,a[10][10];
    printf("Enter the order of the square matrix\n");
    scanf("%d",&n);
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]!=a[j][i])
            {
                printf("The matrix is not symmetric");
                exit(0);
            }
    printf("The matrix is symmetric");
    return 0;
}
