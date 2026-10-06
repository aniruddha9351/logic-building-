/*
step 1 = understand the problem statement 
step 2 = write the alogorithm
step 3 = decide the language
step 4 = write the program
step 5 = test the program
*/

/////////////////////////////
//
//  step 1 =understand the problem statement 
//     user is going to enter any two integer and we have to perform the addition
//
/////////////////////////////
//  step 2 = write the alogorithm
/*
    Start
        accept first as no1
        accept first as no2
        create the variable as ans to store the result 
        perform the addition and store into ans
        display the result from ans
    End
*/
///////////////////////////////
//  step 3 = decide the language
//               we select c programming
//                  
///////////////////////////////
//
//  step 4 = write the program
//
////////////////////////////// 

#include<stdio.h>
int main()
{
    int iValue1 = 10, iValue2 = 11, iResult = 0;
    
    iResult = iValue1 + iValue2 ;// business logic

    printf("%d \n",iResult);

    return 0;
}