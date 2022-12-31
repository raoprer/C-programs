#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m,n,a[10][10];

    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&m,&n);

    printf("Enter %dx%d elements",m,n);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<m;i++){
        for(int j=1;j<=((n-i)/2)+1;j++){
            if(a[i][i+j]!=0){
                printf("The matrix is not a lower triangular matrix");
                exit(0);
            }
        }
    }
    printf("The matrix is a lower triangular matrix");
    return 0;
}
