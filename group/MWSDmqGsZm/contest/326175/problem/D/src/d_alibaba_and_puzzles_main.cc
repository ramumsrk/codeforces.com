#include "d_alibaba_and_puzzles.hh"

#include <cstdlib>
#include <cassert>
#include <format>
#include <iostream>

int main()
{
    long long int a { reada() };
    long long int b { readb() };
    long long int c { readc() };
    long long int d { readd() };

    /*
    assert(
      (
        a >= minimum_value_for_input_numbers_abc
        &&
        a <= maximum_value_for_input_numbers_abc
      )
      &&
      (
        b >= minimum_value_for_input_numbers_abc
        &&
        b <= maximum_value_for_input_numbers_abc
      )
      &&
      (
        c >= minimum_value_for_input_numbers_abc
        &&
        c <= minimum_value_for_input_numbers_abc
      )
      &&
      (
        d >= minimum_value_for_input_number_d
        &&
        d <= maximum_value_for_input_number_d
      )
    );
    */

    if ( check_d_is_arithmetic_of_abc( a , b , c , d ) )
    {
      std::cout<<std::format( "YES" )<<std::endl;
    }
    else
    {
      std::cout<<std::format( "NO" )<<std::endl;
    }
  return EXIT_SUCCESS;
}
