#include<stdio.h>

int main()
{
    int i,j,n,upsum=0,lowsum=0,a[10][10];
    printf("Enter the order of the square matrix\n");
    scanf("%d",&n);
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    //IF i!=j (IF i<j-UPPER) AND (IF i>j-LOWER)
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(i==j)
                continue;
            else if(i<j)
                upsum+=a[i][j];
            else if(i>j)
                lowsum+=a[i][j];
        }

    //PRINT
    printf("Sum of upper triangular matrix= %d\nSum of lower triangular matrix= %d",upsum,lowsum);
    return 0;
}
