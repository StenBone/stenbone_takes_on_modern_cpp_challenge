#pragma once
#include <numeric>
#include <boost/multiprecision/miller_rabin.hpp>

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
    /* It's important to me to use a third-party library. The community around C++ is a strength in its own right. */
    // vcpkg module boost-multiprecision:x64-windows
    return boost::multiprecision::miller_rabin_test(number, 25);
}