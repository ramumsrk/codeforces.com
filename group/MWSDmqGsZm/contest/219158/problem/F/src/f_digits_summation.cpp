#include <iostream>
#include <cstdlib>
#include <format>

// Forward declaration using function prototypes
long long summation_of_last_digits( long long first_number , long long second_number );
long long last_digit_of_a_number( long long number );

int main()
{
    std::cout<<std::format( "Enter first number: " )<<std::endl;
    long long first_number {};
    std::cin>>first_number;
    std::cout<<std::format( "Enter second number: " )<<std::endl;;
    long long second_number {};
    std::cin>>second_number;
    std::cout<<std::format(
      "Summation of last digits of '{}' and '{}' respectively is '{}'",
      first_number,
      second_number,
      summation_of_last_digits( first_number , second_number )
    )<<std::endl;
  return EXIT_SUCCESS;
}

// Function definition
long long summation_of_last_digits( long long first_number , long long second_number )
{
    long long sum_of_last_digits { last_digit_of_a_number( first_number ) + last_digit_of_a_number( second_number ) };
  return sum_of_last_digits;
}

// Function definition
long long last_digit_of_a_number( long long number )
{
    constexpr int base { 10 };
    do
    {
      number = number % base;
    } while ( number > base );
  return number;
}
