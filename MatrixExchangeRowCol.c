#include<stdio.h>

int main()
{
    int n,m,a[10][10],r1,r2,c1,c2,temp;
    printf("Enter the order of the matrix\n");
    scanf("%d %d",&n,&m);
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    //SWAP ROWS
    printf("Enter the ROWs to be swapped\n");
    scanf("%d %d",&r1,&r2);
    for(int j=0;j<m;j++)
    {
         temp=a[r1-1][j];
         a[r1-1][j]=a[r2-1][j];
         a[r2-1][j]=temp;
    }
    //SWAP COLUMNS
    printf("Enter the COLUMNSs to be swapped\n");
    scanf("%d %d",&c1,&c2);
    for(int i=0;i<m;i++)
    {
         temp=a[i][c1-1];
         a[i][c1-1]=a[i][c2-1];
         a[i][c2-1]=temp;
    }
    //PRINT
    printf("The new matrix is\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d     ",a[i][j]);
        printf("\n");
    }
    return 0;
}
