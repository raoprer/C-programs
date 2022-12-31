#include<stdio.h>
#include<conio.h>

int main()
{
    int p;
    char password[55];

    printf("Password: ");

    p=0;
    do{
        password[p]=getch();//Should use getch only to mask char as there is no feedback to the user... Using scanf doesn't work
        if(password[p]!='\r')
            printf("*");
        p++;
    }while(password[p-1]!='\r');
    password[p-1]='\0';

    printf("\nYou have entered %s as password.",password);
    return 0;
}
