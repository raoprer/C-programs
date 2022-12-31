#include<stdio.h>
int divide(int a,int b)
{
    if(a<=b)
        return 1;
    return (divide(a-b,b)+1);//Think of an example in mind(10,5)-plan to reduce a(10) such that the base condition comes true
}                            //Process (10,5)[gets 1] to (5,5)[overall returns 2=1 (due to 2nd return)+1(due to base condition)]
int main()
{
    int a,b;
    printf("Enter the numbers to be divided ");
    scanf("%d %d",&a,&b);
    printf("%d /%d =%d",a,b,divide(a,b));
    return 0;
}
