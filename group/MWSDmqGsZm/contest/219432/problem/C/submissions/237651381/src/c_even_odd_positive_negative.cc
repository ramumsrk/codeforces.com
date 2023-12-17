#include <iostream>
#include <cassert>
//#include <format>

short int minimum_value_for_number_of_values { +1 };
int short maximum_value_for_number_of_values { +10'000 };
int minimum_value_for_each_number { -10'00'000 };
int maximum_value_for_each_number { +10'00'000 };
// Forward declaration using function prototype
short int read_number_of_values();
int read_number();
bool is_even( int number );
bool is_odd( int number );
bool is_positive( int number );
bool is_negative( int number );
void even_odd_positive_negative_count( int array[] , int number_of_values );

// Function definition
bool is_even( int number )
{
  return ( number % 2 == 0 ) ? true : false;
}

// Function definition
bool is_odd( int number )
{
  return ( number % 2 != 0 ) ? true : false;
}

// Function definition
bool is_positive( int number )
{
  return ( number > 0 ) ? true : false;
}

// Function definition
bool is_negative( int number )
{
  return ( number < 0 ) ? true : false;
}

// Function definition
int read_number()
{
    //std::cout<<std::format( "Enter a number: " )<<std::endl;
    int number {};
    std::cin>>number;
    assert(
      number >= minimum_value_for_each_number
      &&
      number <= maximum_value_for_each_number
    );
  return number;
}

// Function definition
int short read_number_of_values()
{
    //std::cout<<std::format( "Enter total number of values: " )<<std::endl;
    int short number_of_values {};
    std::cin>>number_of_values;
    assert(
      number_of_values >= minimum_value_for_number_of_values
      &&
      number_of_values <= maximum_value_for_number_of_values
    );
  return number_of_values;
}

// Function definition
void even_odd_positive_negative_count( int array[] , int number_of_values )
{
    short int count_of_even {};
    int short count_of_odd {};
    short int count_of_positive {};
    int short count_of_negative {};

    for ( int index {} ; index < number_of_values ; index += 1 )
    {
      if ( is_even( array[index] ) )
      {
        count_of_even += 1;
      }
      if ( is_odd( array[index] ) )
      {
        count_of_odd += 1;
      }
      if ( is_positive( array[index] ) )
      {
        count_of_positive += 1;
      }
      if ( is_negative( array[index] ) )
      {
        count_of_negative += 1;
      }
    }

    std::cout<<"Even: "<<count_of_even<<std::endl;
    std::cout<<"Odd: "<<count_of_odd<<std::endl;
    std::cout<<"Positive: "<<count_of_positive<<std::endl;
    std::cout<<"Negative: "<<count_of_negative<<std::endl;
  return;
}


int main()
{
    short int number_of_values { read_number_of_values() };
    int array[number_of_values];
    for ( int index {} ; index < number_of_values ; index += 1 )
    {
      array[index] = read_number();
    }
    even_odd_positive_negative_count( array , number_of_values );
  return EXIT_SUCCESS;
}
