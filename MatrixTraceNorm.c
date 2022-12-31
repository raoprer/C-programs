#include<stdio.h>
#include<math.h>

int main()
{
    int n,m,a[10][10],trace=0,sqsum=0;
    float norm;
    printf("Enter the order of the square matrix\n");
    scanf("%d",&n);
    printf("Enter the elements if the square matrix\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    //TRACE
    for(int i=0;i<n;i++)
        trace+=a[i][i];
    //NORM
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            sqsum+=a[i][j]*a[i][j];
    norm=pow(sqsum,0.5);
    printf("Trace of the matrix= %d\nNorm of the matrix=%f",trace,norm);
    return 0;
}
