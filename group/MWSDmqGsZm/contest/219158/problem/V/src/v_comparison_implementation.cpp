#include "v_comparison_constraints.hpp"

#include <iostream>
#include <format>

// Function definition
int read_first_number()
{
    std::cout<<std::format( "Enter first number: " )<<std::endl;
    int first_number {};
    std::cin>>first_number;
  return first_number;
}

// Function definition
int read_second_number()
{
    std::cout<<std::format( "Enter second number: " )<<std::endl;
    int second_number {};
    std::cin>>second_number;
  return second_number;
}

// Function definition
char read_symbol()
{
    std::cout<<std::format( "Select either one of '>' , '=' , or '<': " )<<std::endl;
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
          std::cout<<std::format( "Right" )<<std::endl;
        }
        else
        {
          std::cout<<std::format( "Wrong" )<<std::endl;
        }
        break;
      case '>':
        if ( first_number > second_number )
        {
          std::cout<<std::format( "Right" )<<std::endl;
        }
        else
        {
          std::cout<<std::format( "Wrong" )<<std::endl;
        }
        break;
      case '<':
        if ( first_number < second_number )
        {
          std::cout<<std::format( "Right" )<<std::endl;
        }
        else
        {
          std::cout<<std::format( "Wrong" )<<std::endl;
        }
        break;
    }
  return;
}
