#include <iostream>
#include <cstdlib>

// Forward declaration using function prototypes
long long int reada();
long long int readb();
long long int readc();
long long int readd();
bool check_d_is_arithmetic_of_abc( long long int a , long long int b , long long int c , long long int d );

// Function definition
long long int reada()
{
    //std::cout<<std::format( "Enter value for a: " )<<std::endl;
    long long int a {};
    std::cin>>a;
  return a;
}

// Function definition
long long int readb()
{
    //std::cout<<std::format( "Enter value for b: " )<<std::endl;
    long long int b {};
    std::cin>>b;
  return b;
}

// Function definition
long long int readc()
{
    //std::cout<<std::format( "Enter value for c: " )<<std::endl;
    long long int c {};
    std::cin>>c;
  return c;
}

// Function definition
long long int readd()
{
    //std::cout<<std::format( "Enter value for d: " )<<std::endl;
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

int main()
{
    long long int a { reada() };
    long long int b { readb() };
    long long int c { readc() };
    long long int d { readd() };

    /*
    assert(
      (
        a >= minimum_value_for_input_numbers_abc
        &&
        a <= maximum_value_for_input_numbers_abc
      )
      &&
      (
        b >= minimum_value_for_input_numbers_abc
        &&
        b <= maximum_value_for_input_numbers_abc
      )
      &&
      (
        c >= minimum_value_for_input_numbers_abc
        &&
        c <= minimum_value_for_input_numbers_abc
      )
      &&
      (
        d >= minimum_value_for_input_number_d
        &&
        d <= maximum_value_for_input_number_d
      )
    );
    */

    if ( check_d_is_arithmetic_of_abc( a , b , c , d ) )
    {
      std::cout<<"YES"<<std::endl;
    }
    else
    {
      std::cout<<"NO"<<std::endl;
    }
  return EXIT_SUCCESS;
}
