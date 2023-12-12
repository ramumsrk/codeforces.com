#ifndef _f_digits_summation_constraints_
#define _f_digits_summation_constraints_
constexpr int minimum_value_for_first_number { 0 };
constexpr long long int maximum_value_for_first_number { 10LL };
constexpr int minimum_value_for_second_number { 0 };
constexpr long long int maximum_value_for_second_number { 10LL };
// Forward declaration using function prototypes
int summation_of_last_digits( long long int first_number , long long int second_number );
int last_digit_of_a_number( long long int number );
long long int read_first_number();
long long int read_second_number();
#endif // _f_digits_summation_constraints_
