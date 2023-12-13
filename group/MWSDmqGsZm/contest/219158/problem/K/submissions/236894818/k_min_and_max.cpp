#include <iostream>
#include <cstdlib>
//#include <format>

constexpr int maximum_array_size { 3 };

// Forward declaration using function prototype
void sort_numbers( int array[] , int array_size );
void print_minimum_and_maximum_elements( int array[] , int array_size );

int main()
{
    int array[maximum_array_size] {0};
    for ( int index {} ; index < maximum_array_size ; index += 1 )
    {
      //std::cout<<std::format( "Enter element '{}': " , index + 1 )<<std::endl;
      std::cin>>array[index];
    }
    sort_numbers( array , maximum_array_size );
    print_minimum_and_maximum_elements( array , maximum_array_size );
  return EXIT_SUCCESS;
}

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
    std::cout<<array[0]<<" "<<array[array_size - 1]<<std::endl;
  return;
}
