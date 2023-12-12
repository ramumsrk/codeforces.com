#include "f_digits_summation_constraints.hpp"

#include <iostream>
#include <cstdlib>
#include <format>


int main()
{
    long long first_number { read_first_number() };
    long long second_number { read_second_number() };
    std::cout<<std::format(
      "Summation of last digits of '{}' and '{}' respectively is '{}'",
      first_number,
      second_number,
      summation_of_last_digits( first_number , second_number )
    )<<std::endl;
  return EXIT_SUCCESS;
}
