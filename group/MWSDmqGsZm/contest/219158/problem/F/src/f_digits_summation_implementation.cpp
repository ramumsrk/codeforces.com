#include "f_digits_summation_constraints.hpp"

#include <iostream>
#include <format>

// Function definition
int summation_of_last_digits( long long int first_number , long long int second_number )
{
    int sum_of_last_digits { last_digit_of_a_number( first_number ) + last_digit_of_a_number( second_number ) };
  return sum_of_last_digits;
}

// Function definition
int last_digit_of_a_number( long long int number )
{
    constexpr int base { 10 };
    do
    {
      number = number % base;
    } while ( number > base );
  return number;
}

// Function definition
long long int read_first_number()
{
    std::cout<<std::format( "Enter first number: " )<<std::endl;
    long long int first_number {};
    std::cin>>first_number;
  return first_number;
}

// Function definition
long long int read_second_number()
{
    std::cout<<std::format( "Enter second number: " )<<std::endl;
    long long int second_number {};
    std::cin>>second_number;
  return second_number;
}
