#include<stdio.h>

int main()
{
    int n,t,k=0;

    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("n\Enter the number of triangles: ");
    scanf("%d",&t);
    printf("\n");

    while(k<t){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++)
                printf(" ");
            for(int j=1;j<=2*i-1;j++)
                printf("*");
            printf("\n");
        }
        k++;
    }
    return 0;
}
