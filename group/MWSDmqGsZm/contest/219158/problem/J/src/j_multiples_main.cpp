#include "j_multiples_constraints.hpp"

#include <iostream>
#include <cstdlib>
#include <format>
#include <cassert>

int main()
{
    int first_number { read_first_number() };
    int second_number { read_second_number() };

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

    if ( is_multiple( first_number , second_number ) )
    {
      std::cout<<std::format(
        "Either '{}' is a multiple of '{}' or '{}' is a multiple of '{}'" , first_number , second_number , second_number , first_number
      )<<std::endl;
    }
    else
    {
      std::cout<<std::format( "'{}' and '{}' are not multiples of each other", first_number , second_number )<<std::endl;
    }
  return EXIT_SUCCESS;
}
