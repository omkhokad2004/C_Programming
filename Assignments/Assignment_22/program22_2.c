/*
 
   Name: Om Badsha Khokad
   Date:16/11/26
   Problem Statement: Accept number from user and display below pattern
   
   Input:5

    Output: 5 # 4 # 3 # 2 # 1 #
*/    


#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i=0;
   
    for(i=iNo;i>=1;i--)
        {
             printf("%d\t",i);
             printf("#\t");
        }
        printf("\n"); 
}
    

int main()
{
    int iValue1=0;

    printf("Enter number: ");
    scanf("%d",&iValue1);

    Pattern(iValue1);

    return EXIT_SUCCESS;
} 