#include<stdio.h>
#include<math.h>

int main()
{
    int d;
    float a,b,c,disc,r1,r2;

    printf("Enter the coffecients of the quadratic equation: ");
    scanf("%f %f %f",&a,&b,&c);

    disc=b*b-(4*a*c);
    if(disc<0)
        d=1;
    if(disc==0)
        d=2;
    if(disc>0)
        d=3;

    if(a!=0){
        switch(d){
            case 1: printf("\nIMAGINARY ROOTS\n");
            r1=-b/(2*a);//real part
            r2=(sqrt(-d))/(2*a);//imaginary part
            printf("The roots are: root1=%f+%fi and root2=%f-%fi",r1,r2,r1,r2);
            break;

            case 2: printf("\nREAL AND EQUAL ROOTS\n");
            r1=-b/(2*a);
            printf("The roots are: root1=root2=%f",r1);
            break;

            case 3: printf("\nREAL AND UNEQUAL ROOTS\n");
            r1=(-b+sqrt(disc))/(2*a);//root 1
            r2=(-b-sqrt(disc))/(2*a);//root 2
            printf("The roots are: root1=%f and root2=%f",r1,r2);
            break;
        }
    }
    else
        printf("\nThe given equation is not quadratic");

    return 0;
}
