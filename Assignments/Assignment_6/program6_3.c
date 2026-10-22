/*
   Author:Om Badsha Khokad
   Date:22/10/26
   Problem Statement:

*/
#include<stdio.h>
#include<stdlib.h>
void CalculateDiscount(float fAmount)
{
 float fFinalAmount = 0.f;
 float fDiscount=0.0f;

 if(fAmount<1000)
 {
    fDiscount= 0;
    printf("Payable Amount",fFinalAmount);
 }
 else if(fAmount< 5000)
 {
    fDiscount=fAmount*0.10f;
    fFinalAmount=fAmount-fDiscount;
    printf("Payable Amount",fFinalAmount);
 }
 else
 {
    fDiscount=fAmount*0.20f;
    fFinalAmount=fAmount-fDiscount;
    printf("Payable Amount",fFinalAmount);

 }

}
int main()
{
   float fAmount =0.0f;
   printf("Enter purchase amount:");
   scanf("%f",&fAmount);

   CalculateDiscount(fAmount);
   
   return EXIT_SUCCESS;
}