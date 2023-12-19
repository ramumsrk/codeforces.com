#include <iostream>
#include <cstdlib>
#include <cassert>

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

// Function definition
/*
 * Read a `number` from standard-input
 * and @return that `number`
 */
int read_number()
{
    //std::cout<<"Enter a number: ";
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

int main()
{
    int number { read_number() };
    std::cout<<fibonacci( number )<<std::endl;
  return EXIT_SUCCESS;
}
