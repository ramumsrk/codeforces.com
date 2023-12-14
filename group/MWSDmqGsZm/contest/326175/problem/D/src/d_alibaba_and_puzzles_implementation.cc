#include "d_alibaba_and_puzzles.hh"

#include <iostream>
#include <format>

// Function definition
long long int reada()
{
    std::cout<<std::format( "Enter value for a: " )<<std::endl;
    long long int a {};
    std::cin>>a;
  return a;
}

// Function definition
long long int readb()
{
    std::cout<<std::format( "Enter value for b: " )<<std::endl;
    long long int b {};
    std::cin>>b;
  return b;
}

// Function definition
long long int readc()
{
    std::cout<<std::format( "Enter value for c: " )<<std::endl;
    long long int c {};
    std::cin>>c;
  return c;
}

// Function definition
long long int readd()
{
    std::cout<<std::format( "Enter value for d: " )<<std::endl;
    long long int d {};
    std::cin>>d;
  return d;
}

// Function definition
bool check_d_is_arithmetic_of_abc( long long int a , long long int b , long long int c , long long int d )
{
    bool is_d_arithmetic_of_abc { false };
    if (
      ( ( a + b - c ) == d )
      ||
      ( ( a - b + c ) == d )
      ||
      ( ( a + b * c ) == d )
      ||
      ( ( a * b + c ) == d )
      ||
      ( ( a - b * c ) == d )
      ||
      ( ( a * b - c ) == d )
    )
    {
      is_d_arithmetic_of_abc = true;
    }
  return is_d_arithmetic_of_abc;
}
