#include "o_fibonacci_constraints.hh"

#include <iostream>
#include <cassert>

// Function definition
/*
 * Read a `number` from standard-input
 * and @return that `number`
 */
int read_number()
{
    std::cout<<"Enter a number: ";
    int number {};
    std::cin>>number;
    assert(
      number >= minimum_value_for_number
      &&
      number <= maximum_value_for_number
    );
  return number;
}

// Function definition
/*
 * Generate the fibonacci series
 * for @param `number`
 */
int fibonacci( int number )
{
    if ( number <= 1 )
    {
      return 0;
    }
    if ( number == 2 )
    {
      return 1;
    }
  return fibonacci( number - 1 ) + fibonacci( number - 2 );
}
