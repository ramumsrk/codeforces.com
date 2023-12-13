#include <iostream>
#include <cassert>
#include <cstdlib>

constexpr int minimum_value_for_input_numbers { -100 };
constexpr int maximum_value_for_input_numbers { +100 };

// Forward declaration using function prototype
void comparison( int first_number , char symbol , int second_number );
int read_first_number();
int read_second_number();
char read_symbol();

// Function definition
int read_first_number()
{
    //std::cout<<std::format( "Enter first number: " )<<std::endl;
    int first_number {};
    std::cin>>first_number;
  return first_number;
}

// Function definition
int read_second_number()
{
    //std::cout<<std::format( "Enter second number: " )<<std::endl;
    int second_number {};
    std::cin>>second_number;
  return second_number;
}

// Function definition
char read_symbol()
{
    //std::cout<<std::format( "Select either one of '>' , '=' , or '<': " )<<std::endl;
    char symbol {};
    std::cin>>symbol;
  return symbol;
}

// Function definition
void comparison( int first_number , char symbol , int second_number )
{
    switch ( symbol )
    {
      case '=':
        if ( first_number == second_number )
        {
          std::cout<<"Right"<<std::endl;
        }
        else
        {
          std::cout<<"Wrong"<<std::endl;
        }
        break;
      case '>':
        if ( first_number > second_number )
        {
          std::cout<<"Right"<<std::endl;
        }
        else
        {
          std::cout<<"Wrong"<<std::endl;
        }
        break;
      case '<':
        if ( first_number < second_number )
        {
          std::cout<<"Right"<<std::endl;
        }
        else
        {
          std::cout<<"Wrong"<<std::endl;
        }
        break;
    }
  return;
}

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
