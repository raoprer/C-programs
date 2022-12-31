#include<stdio.h>
#include<math.h>

void binaryTo(int n)
{

}

void octalTo(int n)
{

}

void decimalTo(int n)
{
    int i,q,r,req;
    printf("Binary: ");
    for(int i=0;q>1;i++){
        q=n/2;
        r=n%2;
        req=req+r*pow(10,i);
        n=q;
    }
    if(q==0){
        req=req+1*pow(10,i+1);
    }
    if(q==1){
        req=req+0*pow(10,i+1)+1*pow(10,i+2);
    }
    printf("%d",req);

    printf("\nOctal: ");

    printf("\nHexadecimal: ");
}

void hexadecimalTo(int n)
{

}

int main()
{
    int b,n;
    printf("Enter the number system of the input number(2/8/10/16): ");
    scanf("%d",&b);
    printf("\nEnter the number: ");
    scanf("%d",&n);
    printf("\nThe given number %d in other bases are as follows: \n");
    if(b==2)
        binaryTo(n);
    if(b==8)
        octalTo(n);
    if(b==10)
        decimalTo(n);
    if(b==16)
        hexadecimalTo(n);
    else
        printf("Invalid base entered...Please enter the number in any of the given bases(2/8/1/16)");
    return 0;
}
