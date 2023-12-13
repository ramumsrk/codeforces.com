#include "k_min_and_max_constraints.hpp"

#include <iostream>
#include <cstdlib>
#include <format>

int main()
{
    int array[maximum_array_size] {0};
    for ( int index {} ; index < maximum_array_size ; index += 1 )
    {
      std::cout<<std::format( "Enter element '{}': " , index + 1 )<<std::endl;
      std::cin>>array[index];
    }
    sort_numbers( array , maximum_array_size );
    print_minimum_and_maximum_elements( array , maximum_array_size );
  return EXIT_SUCCESS;
}
