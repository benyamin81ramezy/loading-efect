#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#define LS 67

void main()
{
    loading();
}

void loading()
{
    int i ,j;

    system("cls");

    for(i=0 ; i<=2 ;i++ )
    {
        if (i == 1)
        {
            printf("l");
            Sleep(LS);
            printf("o");
            Sleep(LS);
            printf("a");
            Sleep(LS);
            printf("d");
            Sleep(LS);
            printf("i");
            Sleep(LS);
            printf("n");
            Sleep(LS);
            printf("g");
            Sleep(LS);
        }

        else

        for (j=0 ; j<=10 ; j++)
        {
            printf("|");

            Sleep(LS);
        }
    }
}
