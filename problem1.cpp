#include <iostream>
#include <cassert>

/**
 * @brief sum of all natural numbers divisible by 3 or 5, up to a limit
 * 
 * @param limit natural number which is our ceiling
 * @return int 
 */
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

int main(int, char**) {
    // 3 + 5 + 6 + 9 + 10 + 12 + 15 + 18 = 78
    assert(sum_of_numbers_divisible_by_3_and_5(20) == 78);
    return 0;
}
