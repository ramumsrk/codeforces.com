#include "j_multiples_constraints.hpp"

#include <iostream>
#include <format>

// Function definition
int read_first_number()
{
    std::cout<<std::format( "Enter first number: " )<<std::endl;
    int first_number {};
    std::cin>>first_number;
  return first_number;
}

// Function definition
int read_second_number()
{
    std::cout<<std::format( "Enter second number: " )<<std::endl;
    int second_number {};
    std::cin>>second_number;
  return second_number;
}

// Function definition
bool is_multiple( int first_number , int second_number )
{
    bool are_multiples { false };
    if (
      ( first_number % second_number == 0 )
      ||
      ( second_number % first_number == 0 )
    )
    {
      are_multiples = true;
    }
  return are_multiples;
}
