/*
   Name: Om Badsha Khokad
   Date:19/11/26
   Problem Statement: Write a program which accept string from user and toggle the case.

   Input: "Marvellous Multi OS"

   Output: mARVELLOUS mULTI os


*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strtogglex(char*str)
{
   strtoggle(str);
}

int main()
{
   char arr[20];

   printf("Enter string");
   scanf("%[^'\n']s",arr);

   strtogglex(arr);

    return EXIT_SUCCESS;
}