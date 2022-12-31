#include<stdio.h>

int main()
{
    int n,i,j,h,k=0,p,num;

    printf("Enter the height of each triangle: ");
    scanf("%d",&h);
    num=h;
    printf("\nEnter the number of triangles: ");
    scanf("%d",&n);
    printf("\n");

    for(i=0;i<n;i++){
        h=num;
        for(k=0;k<h;k++){
            for(j=0;j<h-k;j++)
                printf(" ");
            for(j=0;j<2*k+1;j++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}
