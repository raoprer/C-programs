#include<stdio.h>
#include<string.h>

int main()
{
    int n=1,i=0;
    char sen[100];

    printf("Enter the sentence: ");
    gets(sen);
    printf("\nThe number of words in the sentence is: ");

    while(sen[i]!='\0'){
        if((sen[i]==' ') && (sen[i+1]!=' '))
            n++;
        i++;
    }
    printf("%d",n);
    return 0;
}
