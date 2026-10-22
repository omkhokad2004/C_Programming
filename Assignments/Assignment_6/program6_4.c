/*
   Author:Om Badsha Khokad
   Date:22/10/26
   Problem Statement: Accept three integer values representing the length of sides of atriangle. Determine whether they can form valid triangle. All sides must be positive,and sum of any two sides must be greter than the third side



*/
#include<stdio.h>
#include<stdlib.h>

void CheckTriangle (int iSide1,int iSide2, int iSide3)
{
   if(iSide1 <=0 || iSide2<=0 || iSide3<=0)
   {
    printf("Invalid triangle");
   }
   else if(iSide1+iSide2>iSide3 &&
           iSide2+iSide3> iSide1 &&
           iSide1+iSide3>iSide2)
     {
        printf("Valid triangle");
    }
    else{
        printf("Invalid triangle");
    }
}

int main()
{
    int iSide1=0 ,iSide2=0,iSide3=0;

    printf("Enter three Sides");
    scanf("%d %d %d",&iSide1,iSide2,iSide3);

    CheckTriangle(iSide1,iSide2,iSide3);

    return EXIT_SUCCESS;
}