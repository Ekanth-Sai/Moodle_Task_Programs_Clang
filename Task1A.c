/*
C program to convert the given number of days into its constituent years, weeks and days
  Test cases:
  Input: 1329
  Output: Please enter the number of days:
          Given number 1329 in 
          Years : 3
          Weeks : 33
          Days : 3
*/
          
#include <stdio.h>

int main()
{
    int years, yearsTemp, weeks, days, number;
    
    printf("Please enter the number of days: ");
    scanf("%d", &number); //Taking the prompt from the user

    years = number / 365; //Mathematical equation to calculate the number of years
    yearsTemp = number % 365;
    weeks = yearsTemp / 7; //Mathematica equation to calculate the number of weeks
    days = yearsTemp % 7; //Mathematical equation to calculate the nymber of days

    printf("Given number %d in\nYears: %d\nWeeks: %d\nDays: %d", number, years, weeks, days); 

    return 0;
}
