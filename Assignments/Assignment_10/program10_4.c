/*
   Author: Om Badsha Khokad
   Date:02/11/26
    Problem Statement: Write a program which accept temperature in Fahrenheit and convert it into Celsius. (C= (F-32)*5/9)
    
     Input: 100
     Output:37.777778



*/


#include<stdio.h>
#include<stdlib.h>
double FHtoCs(float fTemp)
{
    double dCelsius=0.0;
   dCelsius= (fTemp-32)*5/9;
  return dCelsius;
}

int main()
{
    float fValue=0.0f;
    double dRet=0.0;

    printf("Enter temperature in Fahrenheit");
    scanf("%d",&fValue);

    dRet=FHtoCs(fValue);

    printf("Temperature in Celsius is %lf",dRet);

    return EXIT_SUCCESS;
}