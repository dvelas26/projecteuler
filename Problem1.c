#include <stdio.h>

/*Multiples of 3 and 5*/
/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
   The sum of these multiples is 23.
   Find the sum of all the multiples of 3 or 5 below 1000.*/
int main() {
    int sum = 0;
    for (int i = 0; i < 1000; i++) {
        /* To check if a number is a multiple of another number we use 
          the module operator and if it returns 0, then it is a multiple.
        */
        
        if (i % 3 == 0 || i % 5 == 0) {
            sum+=i;
        }
    }

    printf("%d",sum);

    return 0;
}