/*
   Name: Om Badsha Khokad
   Date:19/11/26
   Problem Statement: Write a program which accept string from user and display number of white spaces.

 */
#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    int iCnt=0;
   while(*str !='\0')
   {
      if(*str ==' ')
      {
        iCnt++;
      }
      str++;
   }

}
int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}