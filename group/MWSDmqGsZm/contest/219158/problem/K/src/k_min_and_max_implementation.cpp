#include "k_min_and_max_constraints.hpp"

#include <iostream>
#include <format>

// Function definition
void sort_numbers( int array[] , int array_size )
{
    for ( int outer_index {} ; outer_index < array_size ; outer_index += 1 )
    {
      for ( int inner_index {} ; inner_index < array_size - 1 ; inner_index += 1 )
      {
        if ( array[inner_index] > array[inner_index + 1] )
        {
          int temporary = array[inner_index];
          array[inner_index] = array[inner_index + 1];
          array[inner_index + 1] = temporary;
        }
      }
    }
  return;
}

// Function definition
void print_minimum_and_maximum_elements( int array[] , int array_size )
{
    std::cout<<std::format( "{} {}" , array[0] , array[array_size - 1] )<<std::endl;
  return;
}
