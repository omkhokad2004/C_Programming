/*
   Author:Om Badsha Khokad
   Date:01/10/26
   Problem Statement: Write a program which accept radius of circle from user and calculate its area Consider value of PI as 3.14.

*/
#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    double dArea =0.0;
    dArea =3.14 * fRadius *fRadius ;
    return dArea;

}


int main()
{
    float fValue=0.0f;
    double dRet=0.0f;

    printf("Enter radius\n");
    scanf("%f",&fValue);

    dRet= CircleArea(fValue);

    printf("Area of circle is: %lf",dRet);

    return EXIT_SUCCESS;
}