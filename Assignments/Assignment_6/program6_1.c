/*
   Author:Om Badsha Khokad
   Date:22/10/26
   Problem Statement:


*/
#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill (int iUnits)
{
    float fBill=0.0f;
    if(iUnits <=100 )
    {
        fBill=iUnits*5;
        printf("Your bill is %.2f\n",fBill);
    }
   else if(iUnits >= 100 )
    {
        fBill=iUnits*7;
        printf("Your bill is %.2f\n",fBill);
    }
  else  if(iUnits >200 )
    {
        fBill=iUnits*10;
        printf("Your bill is %.2f\n",fBill);
    }
   else{
    printf("Invalid Input");
   }

}

int main()
{
    int iUnits=0;
    printf("Enter consumed units:");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);




    return EXIT_SUCCESS;
}