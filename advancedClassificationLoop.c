#include <stdio.h>
#include "NumClass.h"
#include "math.h"


/*
*The functions implementation by loops:
*/

// will return 1 if a number is an amstrong number otherwise return 0:
int isArmstrong(int n){
    int remainder, counter = 0;
    float result = 0.0;
    int originalNum = n;

    // counting digits (by param "counter"):
    while(n!=0){
        counter= counter+1;
        n = n/10;
    }

    n = originalNum;
    //calculat the sum of the digits nth pawer:    
    while(n!=0) {
        remainder = n % 10;
        result = result + pow((double)remainder,(double)counter);
        n = n/10;
    }

    if((int)result == originalNum)
        return 1;
    else
        return 0;
}

// will return 1 if a number is palindrom otherwise return 0:
int isPalindrome(int n){
   int reversed = 0; 
   int lastDigit = 0;
   int originalNum = n;
   
    // reversing the integer digits   
   while (n != 0) {
        lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        n = n/10;
    }
    if(originalNum == reversed)
        return 1;
    else
        return 0;
}


