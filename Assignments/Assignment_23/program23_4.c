/*
   Name: Om Badsha Khokad
   Date:19/11/26
   Problem Statement: Write a program which accept string from user and display only digits from that string

 */
#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
   while(*str !='\0')
   {
      if(*str >='0' && *str<='9')
      {
        printf("%c",*str);
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