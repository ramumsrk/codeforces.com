#include "a_watermelon_constraints.hpp"

#include <iostream>
#include <cstdlib>
#include <cassert>
#include <format>

int main()
{
    int watermelon_weight { read_watermelon_weight() };

    assert(
      ( watermelon_weight >= minimum_watermelon_weight )
      &&
      ( watermelon_weight <= maximum_watermelon_weight )
    );

    if ( can_divide_watermelon_into_even_weights( watermelon_weight ) )
    {
      std::cout<<std::format( "YES" )<<std::endl;
    }
    else
    {
      std::cout<<std::format( "NO" )<<std::endl;
    }
  return EXIT_SUCCESS;
}
