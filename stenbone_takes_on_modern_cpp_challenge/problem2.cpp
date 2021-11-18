/* Problem 2 */
#include <cassert>

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

int main(int argc, const char* argv[]) {
    int desired_result = 4;
    assert(greatest_common_divisor(12, 8) == desired_result);

    desired_result = 1;
    assert(greatest_common_divisor(7, 12) == desired_result);

    desired_result = 1;
    assert(greatest_common_divisor(11, 7) == desired_result);
}