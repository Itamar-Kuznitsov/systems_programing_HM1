#include <stdio.h>
#include "NumClass.h"
#include "math.h"


// assistance function for isAmstrong that count the numbers of digits.
int counter(int n){
    int Times = 0;
    int Temp = n;
    
    while (Temp != 0){
        Times = Times + 1;
        Temp = Temp / 10;
    }
    return Times;
}

// assistance function for isAmstrong that make the nesessery calculations.
int resultArmstrong (int num, int times){
    if (num > 0){
        return (pow(num%10,times) + resultArmstrong(num/10,times));
    }
    else
        return 0;
}

// assistance function for isPalindrom that return the reversed integer.
int reverse(int n, int temp){
    // base case
    if (n == 0)
    return temp;

    // stores the reverse of a number
    temp = (temp * 10) + (n % 10);

    return reverse(n / 10, temp);
}



/*
*The functions implementation recursivly:
*/


// will return 1 if a number is an Armstrong number otherwise return 0:
int isArmstrong(int n){
    int result = resultArmstrong(n,counter(n));
    if(n == result){
        return 1;
    }
    else
        return 0;
}


// will return 1 if a number is palindrom otherwise return 0:
int isPalindrome(int n){
    int result = reverse(n,0);
    if(n == result)
        return 1;
    else
        return 0;
}

