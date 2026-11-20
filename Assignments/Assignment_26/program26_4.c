/*
  Name:Om Badsha Khokad
  Date: 20/11/26
  Problem Statement:Accept character from user and check whether it is special symbol or not(!,@,#,%,^,&,*).

  Input:%
  Output:TRUE


*/
#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' ||
       ch == '%' || ch == '^' || ch == '&' ||
       ch == '*')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    bRet=ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special character");

    }
    else{
         printf("It is special character");
    }
}