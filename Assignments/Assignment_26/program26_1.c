/*
  Name:Om Badsha Khokad
  Date: 20/11/26
  Problem Statement:Write a program which displays ASCII table. Table contains symbol,Decimal,Hexadecimal and Octal representation of every member from 0 to 255.


*/
#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("------------------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t%d\t%x\t\t%o\n", iCnt, iCnt, iCnt, iCnt);
    }
 

}
int main()
{
    DisplayASCII();
    return EXIT_SUCCESS;
}