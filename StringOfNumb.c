#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,num,numDig,leftmost,p,rem,i=0;//3 dig numb ex - 2nd 1st 0th

    char ones[30][30]={"one","two","three","four","five","six","seven","eight","nine"};
    char tens1[30][30]={"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    char tens2[30][30]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    char higher[30][30]={"hundred","thousand","thousand","lakh","lakh","crore","crore","crore","crore"};

    printf("Enter the number(less than or equal to 999999999): ");
    scanf("%d",&num);

    n=num;
    numDig=log10(n);

    printf("%d = ",num);

    if(n==0){
        printf("zero");
        exit(0);
    }

    while(n>0){
        leftmost=n/(pow(10,numDig));

        if(leftmost!=0){
            if(numDig==0 || numDig==2 || numDig==3 || numDig==5 || numDig==7)
                printf("%s ",ones[leftmost-1]);

            if(numDig==1 && (n>10 && n<20))
                printf("%s ",tens1[n%10-1]);

            else if(numDig==1 && (n>=20 || n==10))
                printf("%s ",tens2[leftmost-1]);

            else if(numDig>1){
                if(numDig==2 || numDig==3 || numDig==5 || numDig==7)
                    printf("%s ",higher[numDig-2]);

                else{
                    if(numDig>0 && numDig%2==0){
                        rem=n/(pow(10,numDig-1));

                        if(rem<20){
                            printf("%s ",tens1[rem%10-1]);
                            numDig--;
                        }

                        else{
                            printf("%s ",tens2[rem/10-1]);
                            if(rem%10!=0){
                                printf("%s ",ones[rem%10-1]);
                                numDig--;
                            }
                        }
                    }
                    printf("%s ",higher[numDig-2]);
                }
            }
        }


        p=(pow(10,numDig));
        n=n%p;
        numDig--;
    }
    return 0;
}
