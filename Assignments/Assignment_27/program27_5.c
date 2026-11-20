/*
   Name:Om Badsha Khokad
  Date: 20/11/26
  Problem Statement:Write a program which accept string from user and display it in reverse order


*/
#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    char *start = str;

    while(*str != '\0')
    {
        str++;
    }

    str--;

    while(str >= start)
    {
        printf("%c",*str);
        str--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]",arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}
