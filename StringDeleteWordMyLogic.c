#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int i,j,k,flag,p,len,ls,lw;
    char sent[100],word[10];

    printf("Enter the sentence: ");
    gets(sent);
    printf("\nEnter the word: ");
    gets(word);

    ls=strlen(sent);
    lw=strlen(word);
    len=ls-lw;

    for(i=0;i<ls;i++){
        flag=1;
        k=i;
        for(j=0;j<lw;j++){
            if(sent[k]==word[j]){
                k++;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag){
            for(p=i;p<len;p++){
                sent[p]=sent[p+lw];
            }
            sent[len]='\0';
            puts(sent);
            break;
        }
    }
    return 0;
}
