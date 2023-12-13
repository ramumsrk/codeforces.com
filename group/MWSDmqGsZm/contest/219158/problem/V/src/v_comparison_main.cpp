#include "v_comparison_constraints.hpp"

#include <cassert>
#include <cstdlib>

int main()
{
    int first_number { read_first_number() };
    char symbol { read_symbol() };
    int second_number { read_second_number() };

    assert(
      (
        first_number >= minimum_value_for_input_numbers
        &&
        first_number <= maximum_value_for_input_numbers
      )
      &&
      (
        second_number >= minimum_value_for_input_numbers
        &&
        second_number <= maximum_value_for_input_numbers
      )
      &&
      (
        symbol == '>'
        ||
        symbol == '='
        ||
        symbol == '<'
      )
    );

    comparison( first_number , symbol , second_number );
  return EXIT_SUCCESS;
}
