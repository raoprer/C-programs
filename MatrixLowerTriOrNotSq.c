#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,a[20][20];

    printf("Enter the number rows and columns: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(a[i][j]!=0){
                printf("\nNot lower triangular");
                exit(0);
            }
        }
    }
    printf("\nLower triangular");

    return 0;
}
