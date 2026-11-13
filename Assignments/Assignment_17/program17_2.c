/*

   Name: Om Badsha Khokad
   Date:12/11/26
   Problem Statement: Accept two numbers of rows and columns from user and display below pattern
   
   Input: iRow=4   iCol=4

   Output: 2  4  6  8  10
           1  3  5  7   9
           2  4  6  8   10
            1  3  5  7   9
           

*/ 
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int iCnt1=0,iCnt2=0;
    int iNum=1;
     for(iCnt1=iRow;iCnt1>=1;iCnt1--)
     {
        if(iCnt1%2==0)
        {
            for(iCnt2=1;iCnt2<=iCol;iCnt2++)
            {
                printf("%d\t",iCnt2*2);
            }
        }
        else
        {
            for(iCnt2=1;iCnt2<=iCol;iCnt2++)
            {
                printf("%d\t",(iCnt2-1));
            }

  
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
