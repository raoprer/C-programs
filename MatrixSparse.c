//SPARSE MATRIX = more number of zero elements than non zero elements
#include<stdio.h>

int main()
{
    int n,m,i,j,a[10][10],zcount=0;
    printf("Enter the order of the matrix\n");
    scanf("%d %d",&n,&m);
    printf("Enter the elements of the matrix\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
     for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(a[i][j]==0)
                zcount++;
     if(zcount>(n*m-zcount))
        printf("The matrix is a sparse matrix");
     else
        printf("The matrix is not a sparse matrix");
     return 0;
}
