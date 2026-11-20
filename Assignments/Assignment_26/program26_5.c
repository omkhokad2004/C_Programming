/*
  Name:Om Badsha Khokad
  Date: 20/11/26
  Problem Statement:Accept character from user and display its ASCII value in decimal,octal,and hexadecimal format.


*/
#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("Decimal: %d\n",ch);
    printf("Octal: %o\n",ch);
    printf("Hexadecimal: %x\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}