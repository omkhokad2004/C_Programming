/*
 
   Name: Om Badsha Khokad
   Date:16/11/26
   Problem Statement: Accept number from user and display below pattern
   
   Input:8

    Output:  2 4 6 8 10 12 14 16
*/    


#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i=0;
   
    for(i=1;i<=iNo;i++)
        {
            if(i%2!=0){
             printf("\t");
        }
        else
        {
          printf("%d\t",i);
        }

        printf("\n"); 
}
}
    

int main()
{
    int iValue1=0;

    printf("Enter number: ");
    scanf("%d",&iValue1);

    Pattern(iValue1);

    return EXIT_SUCCESS;
} 