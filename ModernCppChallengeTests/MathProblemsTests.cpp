#include "pch.h"
#include "../stenbone_takes_on_modern_cpp_challenge/MathProblems.h"
#include <set>
TEST(MathProblems, Problem1) {
    // 3 + 5 + 6 + 9 + 10 + 12 + 15 + 18 = 78
    EXPECT_EQ(sum_of_numbers_divisible_by_3_and_5(20), 78);
}
TEST(MathProblems, Problem2) {
    EXPECT_EQ(greatest_common_divisor(3 * 4, 2 * 4), 4);
    EXPECT_EQ(greatest_common_divisor(7, 12), 1);
    EXPECT_EQ(greatest_common_divisor(11, 7), 1);
}
TEST(MathProblems, Problem3) {
    EXPECT_EQ(least_common_multiple(12, 8), 24);
}
TEST(MathProblems, Problem4) {
    const auto prime_nbr = 2936981;
    const auto target = prime_nbr + 2; // 2936982 and 2936983 are not prime
    EXPECT_EQ(prime_nbr, largest_prime_smaller_than_number(target));
}
TEST(MathProblems, Problem5) {
    const auto prime_nbr = 29;
    std::set<int> sexy_primes_up_to_29 = {5, 7, 11, 13, 17, 19, 23, 29};
    auto result = gather_sexy_primes_up_to_n(29);
    EXPECT_TRUE(sexy_primes_up_to_29 == result);
}