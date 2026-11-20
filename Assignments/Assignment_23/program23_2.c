/*
   Name: Om Badsha Khokad
   Date:19/11/26
   Problem Statement: Write a program which accept string from user and convert it into upper case.

   Input: marvellous multi os
   Output: MARVELLOUS MULTI OS


*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void struprx(char*str)
{
   strupr(str);
}

int main()
{
   char arr[20];

   printf("Enter string");
   scanf("%[^'\n']s",arr);

   struprx(arr);

    return EXIT_SUCCESS;
}