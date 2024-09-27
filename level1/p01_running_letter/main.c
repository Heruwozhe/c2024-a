#include <stdio.h>
#include <windows.h>
#include <string.h>
int main(void)
{
    char arr1[]="a                                               ";
    for(int i = 0;i<strlen(arr1)-1;i++)
    {
        printf("%s",arr1);
        arr1[i]=' ';
        arr1[i+1]='a';
        Sleep(200);
        system("cls");
    }
    printf("%s",arr1);
    system("cls");
    Sleep(200);
    for(int i = strlen(arr1)-1;i>0;i--)
    {
        printf("%s",arr1);
        arr1[i]=' ';
        arr1[i-1]='a';
        Sleep(200);
        system("cls");
    }
    printf("%s",arr1);
    system("cls");
    printf("Press enter to exit...");
    getchar();
    return 0;
}