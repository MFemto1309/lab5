#include "minunit.h"
#include "func51.h"
#include <math.h>

/* ---------- SUM ---------- */
MU_TEST(test_sum) {
    mu_assert_double_eq(5.0, sum(2.0, 3.0));
    mu_assert_double_eq(-1.0, sum(-3.0, 2.0));
    mu_assert_double_eq(0.0, sum(0.0, 0.0));
}

/* ---------- SUB ---------- */
MU_TEST(test_sub) {
    mu_assert_double_eq(3.0, sub(5.0, 2.0));
    mu_assert_double_eq(-5.0, sub(-2.0, 3.0));
    mu_assert_double_eq(-5.5, sub(0.0, 5.5));
}

/* ---------- MUL ---------- */
MU_TEST(test_mul) {
    mu_assert_double_eq(12.0, mul(4.0, 3.0));
    mu_assert_double_eq(-6.0, mul(2.0, -3.0));
    mu_assert_double_eq(0.0, mul(0.0, 100.0));
}

/* ---------- DIV ---------- */
MU_TEST(test_div) {
    mu_assert_double_eq(3.0, myDiv(9.0, 3.0));
    mu_assert_double_eq(-2.5, myDiv(5.0, -2.0));

    mu_check(isnan(myDiv(1.0, 0.0)));    // деление на ноль → NaN
    mu_check(isnan(myDiv(-7.0, 0.0)));   // деление на ноль → NaN
}

/* ---------- POW ---------- */
MU_TEST(test_power) {
    mu_assert_double_eq(8.0, myPow(2.0, 3.0));
    mu_assert_double_eq(1.0, myPow(5.0, 0.0));
    mu_assert_double_eq(0.25, myPow(2.0, -2.0));
    mu_assert_double_eq(0.0, myPow(0.0, 5.0));
}

/* ---------- SUITE ---------- */
MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_sum);
    MU_RUN_TEST(test_sub);
    MU_RUN_TEST(test_mul);
    MU_RUN_TEST(test_div);
    MU_RUN_TEST(test_power);
}

int main(void) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return MU_EXIT_CODE;
}
