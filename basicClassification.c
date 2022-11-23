#include <stdio.h>
#include "NumClass.h"

// assistant func- factorial function: 
unsigned int factorial(unsigned int n){
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

// will return 1 if a number is prime otherwise return 0:
int isPrime(int n){
    int flag = 1;
    int i;

    // 0 and 1 are not prime numbers - flag 0
    if (n == 0){
    flag = 0;
    }

    // if n is divisible by i, then n isn't prime - flag 0
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag == 1){
        return 1;
    }
    else{
        return 0;
    }

}

// will return 1 if a number is a Strong num otherwise return 0:
int isStrong(int n){
    int sum = 0;
    
    // sum of the factorial digits
    int originalNum = n;
    while(n>0){
        int mod = n % 10;
        sum+= factorial(mod);  
        n = n / 10; 
    }

    if(sum==originalNum && originalNum!=0)
        return 1;
      
    else
        return 0;
    
}


