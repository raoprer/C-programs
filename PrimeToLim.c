#include<stdio.h>

int main()
{
    int l,h,isprime;
    printf("Enter the lower and upper limits\n");
    scanf("%d %d",&l,&2h);

    for(int i=l;i<=h;i++){
        isprime=1;
        for(int j=2;j<=i/2;j++)
            if(i%j==0){
                isprime=0;
                break;
            }
        if(isprime)
            printf("%d ",i);
    }
    return 0;
}
