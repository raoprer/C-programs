#include<stdio.h>

int main()
{
    int n,k=0,m;

    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("\n");

    for(int i=0;i<n;i++){
        k=!k;
        m=k;
    for(int j=1;j<=i;j++){
            printf("%d ",m);
            m=!m;
        }
        printf("\n");
    }
    return 0;
}
