/*
   Name: Om Badsha Khokad
   Date:19/11/26
   Problem Statement: Write a program which accept string from user and convert it into lower case.

   Input: "Marvellous Multi OS"
   Output: marvellous multi os


*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strlwrx(char*str)
{
   strlwr(str);
}

int main()
{
   char arr[20];

   printf("Enter string");
   scanf("%[^'\n']s",arr);

   strlwrx(arr);

    return EXIT_SUCCESS;
}