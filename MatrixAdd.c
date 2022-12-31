#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m,p,q,a[10][10],b[10][10],sum[10][10];
    printf("Enter the number of rows and columns of the first matrix\n");
    scanf("%d %d",&n,&m);
    printf("Enter the elements of the first matrix\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&a[i][j]);

    printf("Enter the number of rows and columns of the second matrix\n");
    scanf("%d %d",&p,&q);
    if(n!=p)
    {
        printf("Addition not possible as orders of matrices are not equal");
        end(0);
    }
    printf("Enter the elements of the second matrix\n");
    for(int i=0;i<p;i++)
        for(int j=0;j<q;j++)
            scanf("%d",&b[i][j]);

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            sum[i][j]=a[i][j]+b[i][j];

    printf("The sum matrix is\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d     ",sum[i][j]);
        printf("\n");
    }
    return 0;
}
