

#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name: Addition
// Input        : Integer,Integer
// Output       : Integer
// Description  : Perform addition
// Date         : 04/10/26
// Author       : Om Badsha Khokad
//
////////////////////////////////////////////////////////////////////////////////////////////
int Addition(
              int iNo1,  //First input
              int iNo2    //Second input
            )
{
  int iAns=0;
  iAns=iNo1 +iNo2; ///business logic
  return iAns;
}

int main()
{
      int iValue1=0, iValue2=0, iResult=0;
      
      printf("Enter first number:\n");
      if(scanf("%d",&iValue1)!=1)
      {
        fprintf(stderr, "Invalid input. Please enter a valid integer.\n");
        return EXIT_FAILURE;
      }

      printf("Enter second number:\n");
      if(scanf("%d",&iValue2)!=1)
      {
        fprintf(stderr, "Invalid input. Please enter a valid integer.\n");
        return EXIT_FAILURE;
      }

      iResult= Addition(iValue1,iValue2);
      printf("Addition is : %d\n",iResult);

    return EXIT_SUCCESS;
}
////////////////////////////////////////////////////////////////////////////////////////////
//
//   Step 5:
//          tested test cases
//   
//        Input1     Input2     Output
//          10         11         21
//          11         0          11
//          0          11         11
//         20         -9          11
//         -9          20         11
//        -20         -11        -31
////////////////////////////////////////////////////////////////////////////////////////////