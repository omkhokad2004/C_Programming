/*
   Name: Om Badsha Khokad
   Date:11/11/26
   Problem Statement: Accept two numbers of rows and columns from user and display below pattern
   
   Input: iRow=3   iCol=4

   Output: 1  2  3  4
           5  6  7  8
           9 10  11 12 
           

*/ 
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int iCnt1=0,iCnt2=0;
    int iNum=1;
     for(iCnt1=iRow;iCnt1>=1;iCnt1--)
   {
   for(iCnt2=iCol;iCnt2>=1;iCnt2--)
   {
    printf("%d\t",iNum);
    iNum++;
     
   }
   printf("\n");
}
 
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows and columns");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}