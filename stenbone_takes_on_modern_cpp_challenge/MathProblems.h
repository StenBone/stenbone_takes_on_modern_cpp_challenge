#pragma once
#include <math.h>

/* Problem 1 */
int sum_of_numbers_divisible_by_3_and_5(int limit) {
    int num = 1, sum = 0;
    while (num < limit)
    {
        if (num % 3 == 0 || num % 5 == 0) {
            sum += num;
        }
        num++;
    }
    return sum;
}

/* Problem 2 */
int greatest_common_divisor(int a, int b) {
    // Euclid's Algorithm
    while (a != b) {
        if (a > b) {
            a -= b; // a = a - b
        }
        else { // b > a
            b -= a; // b = b - a
        }
    }
    return a;
}

/* Problem 3 */
int least_common_divisor(int a, int b) {
    return (a * b) / greatest_common_divisor(a, b); // int / int = int, the quotient is the only thing returned
}

/* Problem 4 */