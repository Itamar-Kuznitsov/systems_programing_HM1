#include <stdio.h>
#include "NumClass.h"
#include "basicClassification.c"

#define TRUE 1

int main(){
    int number1, number2, c, status;
    static int big, small;
    printf("Enter the first integer: \n");
    scanf("%d", &number1);
    printf("Enter the second integer: \n");
    scanf("%d", &number2);


    if(number2 >= number1){
        big= number2;
        small = number1;
    }
    else{
        big= number1;
        small = number2;
    }

   // print the Amstrong numbers. 
    printf("\nThe Armstrong numbers are: ");
    c = small;
    while (c<=big){
        status = isArmstrong(c);
        // printf("# %d ",status);
        if(status == TRUE){
           printf("%d ",c); 
        }
        c= c+1;
    }
 
    // print the palindromial numbers. 
    printf("\nThe Palindromes are: ");
    c = small;
    while (c<=big){
        status = isPalindrome(c);
        // printf("%d ",status);
        if(status == TRUE){
           printf("%d ",c); 
        }
        c= c+1;
    }

    // print the prime numbers. 
    printf("\nThe Prime numbers are: ");
    c = small;
    while (c<=big){
        status = isPrime(c);

        if(status == TRUE){
           printf("%d ",c); 
        }
        c= c+1;
    }

    // print the strong numbers. 
    printf("\nThe Strong numbers are: ");
    c = small;
    while (c<=big){
        status = isStrong(c);

        if(status == TRUE){
           printf("%d ",c); 
        }
        c= c+1;
    }

    printf("\n");
    return 0;
}

