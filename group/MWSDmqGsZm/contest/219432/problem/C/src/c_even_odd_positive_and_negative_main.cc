#include "c_even_odd_positive_and_negative_constraints.hh"

#include <cstdlib>

int main()
{
    short int number_of_values { read_number_of_values() };
    int array[number_of_values];
    for ( int index {} ; index < number_of_values ; index += 1 )
    {
      array[index] = read_number();
    }
    even_odd_positive_negative_count( array , number_of_values );
  return EXIT_SUCCESS;
}
