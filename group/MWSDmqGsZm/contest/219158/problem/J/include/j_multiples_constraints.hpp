#ifndef _J_MULTIPLES_CONSTRAINTS_
#define _J_MULTIPLES_CONSTRAINTS_
constexpr int minimum_value_for_first_number { 1 };
constexpr int maximum_value_for_first_number { 10000000 };
constexpr int minimum_value_for_second_number { 1 };
constexpr int maximum_value_for_second_number { 10000000 };
int read_first_number();
int read_second_number();
bool is_multiple( int first_number , int second_number );
#endif // _J_MULTIPLES_CONSTRAINTS_
