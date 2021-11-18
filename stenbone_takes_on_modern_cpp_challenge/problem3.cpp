/* Problem 3 */
#include <iostream>
#include <cassert>
#include <math.h>

int greatest_common_divisor(int a, int b) {
    // Euclid's Algorithm
    while(a != b) {
        if (a > b) {
            a -= b; // a = a - b
        }
        else { // b > a
            b -= a; // b = b - a
        }
    }    
    return a;
}

int least_common_divisor(int a, int b) {
    return (a * b)/greatest_common_divisor(a, b); // int / int = int, the quotient is the only thing returned
}

int main(int argc, const char* argv[]) {
    int desired_result = 24;
    int result = least_common_divisor(12, 8);
    std::cout << "desired result = " << desired_result << ": result = " << result << std::endl;
    assert(result == desired_result);
}