/*
   Author: Om Badsha Khokad
   Date:31/10/26
   Problem Statement: Accept amount in US dollar and return its corresponding value in indian currency .consider 1$ as 70 rs.

*/
#include<stdio.h>
#include<stdlib.h>

int DollarToINR(float fUSD)
{
    float fINR=0.0f;
    fINR=fUSD*70;
    return fINR;
}
int main()
{
    int fValue=0,fRet=0;
    printf("enter number of USD");
    scanf("%d",&fValue);

    fRet= DollarToINR(fValue);

    printf("Value in INR is %d",fRet);
    return EXIT_SUCCESS;
}