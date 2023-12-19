#ifndef _o_fibonacci_constraints_
#define _o_fibonacci_constraints_
int constexpr minimum_value_for_number { 1 };
constexpr int maximum_value_for_number { 50 };
// Forward declaration using function prototype
/*
 * Return sum of fibonacci series of
 * @param `number`
 */
int fibonacci( int number );
/*
 * Read an integer from standard-input
 * and return the same
 */
int read_number();
#endif // _o_fibonacci_constraints_
