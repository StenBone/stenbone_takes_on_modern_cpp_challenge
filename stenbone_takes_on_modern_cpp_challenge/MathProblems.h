#pragma once
#include <numeric>
#include <iostream>
#include <set>
#include <boost/multiprecision/miller_rabin.hpp>

auto& is_prime = boost::multiprecision::miller_rabin_test<int>;

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
/* requires vcpkg module boost-multiprecision:x64-windows */
int largest_prime_smaller_than_number(unsigned int starting_number) {
    // It's important to me to use third-party libraries in this challenge. 
    // The community around C++ is a strength in its own right.
    int result = starting_number;
    while (is_prime(result, 25) != true) {
        result--;
    }

    return result;;
}

/* Problem 5 */
std::set<int> gather_sexy_primes_up_to_n(int n) {
    std::set<int> sexy_primes;
    int number = 6;
    while (number++ <= n) {
        if (is_prime(number - 6, 25) && is_prime(number, 25)) {
            sexy_primes.insert(number);
            sexy_primes.insert(number - 6);
        }
    }
    return sexy_primes;
}

void print_all_sexy_primes_up_to_n(int n) {
    for (const auto prime : gather_sexy_primes_up_to_n(n)) {
        std::cout << prime;
    }
}

