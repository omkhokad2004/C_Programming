/*
  Name:Om Badsha Khokad
  Date: 20/11/26
  Problem Statement: Accept division of student from user and depends on the division display exam timing . There are 4 division in school as A,B,C,D.Exam of division A at 7am, B at 8.30am,C at 9.20am,D at 10.30am


*/

#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char chDiv)
{
   if(chDiv=='A')
   {
    printf("Your exam at 7am");
   } 
   else if(chDiv=='B')
   {
      printf("Your exam at 8.30am");
   }
   else if(chDiv=='C')
   {
       printf("Your exam at 9.20am");
   }
   else{
    printf("Your exam at 10.30am");
   }
}
int main ()
{
    char cValue='\0';
   
    printf("Enter your Division");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}