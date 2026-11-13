/*

   Name: Om Badsha Khokad
   Date:12/11/26
   Problem Statement: Accept two numbers of rows and columns from user and display below pattern
   
   Input: iRow=5   iCol=5

   Output:  1   2   3   4  5 
           -1  -2  -3  -4 -5
            1   2   3   4  5 
           -1  -2  -3  -4 -5
            1   2   3   4  5 
           

*/ 
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int iCnt1=0,iCnt2=0;
    int iNum=1;
     for(iCnt1=iRow;iCnt1>=1;iCnt1--)
     {
        if(iCnt1%2!=0)
        {
            for(iCnt2=1;iCnt2<=iCol;iCnt2++)
            {
                printf("%d\t",iCnt2);
                
            }
        }
            else{
                  for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
            {
                printf("%d\t",-iCnt2);
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
