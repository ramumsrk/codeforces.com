#ifndef _constraints_
#define _constraints_
/**
 * Minimum number of test cases
 */
constexpr int minimum_test_cases {1};
/**
 * Maximum number of test cases
 */
int constexpr maximum_test_cases {108};
/**
 * Maximum number of columns
 */
int constexpr maximum_columns {3};
/**
 * Maximum number of rows
 */
int constexpr maximum_rows {3};
/**
 * @return  Missing character in latin
 *          square
 * A B C
 * B C A
 * C A B
 */
char
missing_character_in_latin_square();
#endif // _constraints_
