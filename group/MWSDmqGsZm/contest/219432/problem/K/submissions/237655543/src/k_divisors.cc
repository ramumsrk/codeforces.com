#include <iostream>
#include <cstdlib>
#include <cassert>

constexpr short int minimum_value_for_number { +1 };
constexpr int maximum_value_for_number { +10'00'00 };

// Forward declaration using function prototype
int read_number();
void divisors( int number );

// Function definition
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
void divisors( int number )
{
    for ( int divisor { 1 } ; divisor <= number ; divisor += 1 )
    {
      if ( number % divisor == 0 )
      {
        std::cout<<divisor<<std::endl;
      }
    }
  return;
}

int main()
{
    int number { read_number() };
    divisors( number );
  return EXIT_SUCCESS;
}
