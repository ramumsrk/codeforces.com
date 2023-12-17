#ifndef _c_even_odd_positive_and_negative_constraints_
#define _c_even_odd_positive_and_negative_constraints_
short int minimum_value_for_number_of_values { +1 };
int short maximum_value_for_number_of_values { +10'000 };
int minimum_value_for_each_number { -10'00'000 };
int maximum_value_for_each_number { +10'00'000 };
// Forward declaration using function prototype
short int read_number_of_values();
int read_number();
bool is_even( int number );
bool is_odd( int number );
bool is_positive( int number );
bool is_negative( int number );
void even_odd_positive_negative_count( int array[] , int number_of_values );
#endif // _c_even_odd_positive_and_negative_constraints_
