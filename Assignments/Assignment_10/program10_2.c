/*
   Author: Om Badsha Khokad
   Date:02/11/26
   Problem Statement: Write a program which accept width and height of rectangle and calculate its area. (Area=width*height)

    Input: 5 4
    Output:20


*/

#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth,float fHeight)
{
    double Area=0;
   Area=fWidth*fHeight;
   return Area;
}
int main()
{
    float fValue1=0.0f,fValue2=0.0;
    double dRet =0.0;

    printf("Enter width");
    scanf("%f",&fValue1);

    printf("Enter height");
    scanf("%f",&fValue2);

    dRet= RectArea(fValue1,fValue2);

    printf("Area of rectangle is:%lf\n",dRet);
   


    return EXIT_SUCCESS;
}