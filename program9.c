#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////// 
//      
//      function name   : Addition
//      Input           : Integer,Integer
//      Output          : Integer
//      Description     : perform addition
//      Date            : 04/10/2026
//      Author          : Aniruddha kalpana Sachin Jadhav 
//
/////////////////////////////////////////////////////////////

int addition(
             int ino1,   // first input 
             int ino2    //second input
            )
{
    int iAns = 0 ;

    iAns = ino1 + ino2;  // business logic

    return iAns;
}
/////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
/////////////////////////////////////////////////////////////

int main()
{ 
    int iValue1 = 0,iValue2 =0, iResult = 0;

    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    iResult = addition(iValue1,iValue2);
    
    printf("Addition is :%d \n",iResult);

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////
//
//   step 5 = test the program
//         
//          Tested test case
//-------------------------------------------
//              input1   input2     ans
//                 10      11      21
//                 11      0       11
//                 0       11      11
//                 21      -9      12
// 
/////////////////////////////////////////////////////////////