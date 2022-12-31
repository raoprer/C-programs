#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m,p,q,a[10][10],b[10][10],prod[10][10];
    printf("Enter the order of the first matrix\n");
    scanf("%d %d",&n,&m);
    printf("Enter the elements of the first matrix\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    printf("Enter the order of the second matrix\n");
    scanf("%d %d",&p,&q);
    if(m!=p)
    {
        printf("Multiplication is not possible\n");
        end(0);
    }
    printf("Enter the elements of the second matrix\n");
    for(int i=0;i<p;i++)
        for(int j=0;j<q;j++)
            scanf("%d",&b[i][j]);
    printf("The product of the two matrices is\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            prod[i][j]=0;
            for(int k=0;k<m;k++)
                prod[i][j]+=a[i][k]*b[k][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
            printf("%d     ",prod[i][j]);
        printf("\n");
    }
    return 0;
}
