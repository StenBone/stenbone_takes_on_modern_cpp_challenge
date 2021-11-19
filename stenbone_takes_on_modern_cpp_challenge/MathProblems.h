#pragma once
#include <numeric>

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
    return std::gcd(a, b);
}

/* Problem 3 */
int least_common_multiple(int a, int b) {
    return std::lcm(a, b);
}

/* Problem 4 */
int largest_prime_smaller_than_number(unsigned int number) {

}