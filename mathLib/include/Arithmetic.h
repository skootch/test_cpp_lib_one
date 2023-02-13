#ifndef DVID_TEST_CPP_LIB_ONE_ARITHMETIC_H_
#define DVID_TEST_CPP_LIB_ONE_ARITHMETIC_H_

namespace dvid {
namespace arithmetic {

/**
 * Test addition method. Doesn't test for overflow or underflow (eg. -INT_MAX + -INT_MAX).
 *
 * @param a
 * @param b
 * @return a + b
 */
int add(int a, int b);

} // namespace arithmetic
} // namespace dvid

#endif