#include "i_welcome_for_you_with_conditions_constraints.hpp"

#include <iostream>
#include <cstdlib>
#include <format>
#include <cassert>

int main()
{
    // Read two numbers from standard-input
    std::cout<<std::format( "Enter first number: " )<<std::endl;
    int first_number {};
    std::cin>>first_number;
    std::cout<<std::format( "Enter second number: " )<<std::endl;
    int second_number {};
    std::cin>>second_number;

    assert(
      (
       first_number >= minimum_value_for_first_number
       &&
       first_number <= maximum_value_for_first_number
      )
      &&
      (
       second_number >= minimum_value_for_second_number
       &&
       second_number <= maximum_value_for_second_number
      )
    );

    if ( first_number > second_number )
    {
      std::cout<<std::format( "'{}' is greater than '{}'" , first_number , second_number )<<std::endl;
    }
    else if ( first_number == second_number )
    {
      std::cout<<std::format( "'{}' and '{}' are equal" , first_number , second_number )<<std::endl;
    }
    else
    {
      std::cout<<std::format( "'{}' is less than '{}'" , first_number , second_number )<<std::endl;
    }
  return EXIT_SUCCESS;
}
