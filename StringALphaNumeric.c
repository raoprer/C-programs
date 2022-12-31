#include<stdio.h>

int main()
{
    int csum=0,nsum=0,sum=0;
    char str[30];

    printf("Enter the alphanumeric string: ");
    gets(str);

    for(int i=0;str[i]!='\0';i++){
        if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
            csum++;
        else{
            nsum++;
            sum+=str[i]-48;
        }
    }
    printf("\nThe number of characters is %d and the number of integers is %d",csum,nsum);
    printf("\nThe sum of numbers is %d",sum);

    return 0;
}
