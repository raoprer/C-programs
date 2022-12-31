#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int j=0,k=0;
    char str[100],twoD[30][30];

    printf("Enter the string: ");
    gets(str);

    for(int i=0;str[i]!='\0';i++){
        twoD[j][k]=str[i];
        k++; //do not forget
        if(str[i]==' '){
            twoD[j][k]='\0';
            j++;
            k=0;
        }
    }
    twoD[j][k]='\0';

    for(int i=0;i<=j;i++){
        for(k=i+1;k<j;k++){
            if(!(strcmp(twoD[i],twoD[k]))){
                twoD[k][0]='\0';
            }
        }
    }

    printf("\nThe modified sting is: ");
    for(int i=0;i<=j;i++){
        if(twoD[i][0]!='\0')
            printf("%s ",twoD[i]);
    }

    return 0;
}
