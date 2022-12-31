#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int flag,i,j,k;
    char str[30],sub[10];

    printf("Enter the string: ");
    gets(str);
    printf("\nEnter the phrase to be found: ");
    gets(sub);

    for(int i=0;i<(strlen(str)-strlen(sub));i++){
        flag=1;
        k=i;
        for(int j=0;j<strlen(sub);j++){
            if(str[k]==str[j]){
                k++;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag){
            printf("%s is found in %s",sub,str);
            break;
        }
    }
    if(!flag)
        printf("%s is not found in %s",sub,str);
    return 0;
}
