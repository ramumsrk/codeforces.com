/*
* std::cout
* std::endl
*/
#include <iostream>

// std::format
#include <format>

// assert()
#include <cassert>

// EXIT_SUCCESS
#include <cstdlib>

/**
 *
 * Integer literal indicating the
 * number to be subtracted in display
 * prompts
 *
*/
constexpr int POSITIVE_ONE {+1};

/**
 * Number to subtract
*/
int constexpr ONE {+1};

/**
 * Base of a decimal natural number
*/
constexpr int TEN {+10};

/**
 * Minimum value for input number
*/
constexpr int minimum_number_value {2};

/**
 * Maximum value for input number
*/
long int constexpr long maximum_number_value {10'000'000'000};

/**
 * Minimum number of subtraction operations
*/
constexpr int minimum_number_of_subtractions {1};

/**
 * Maximum number of subtraction operations 
*/
int constexpr maximum_number_of_subtractions {50};

/**
 * 
 * @param P prompt string
 * @param N Data type of integral number
*/
template<typename P , typename N>
N
read_input_number(
  P prompt,
  N integral_input_number
);

/**
 * 
 * @return  true if one's place
 * of a decimal number is greater
 * than ZERO(0) false otherwise
*/
bool
is_ones_place_digit_nonzero(
  int n
);

/**
 * 
 * @return  true if one's place
 * of a decimal number is ZERO(0)
 * false otherwise
*/
bool
is_ones_place_digit_zero(
  int n
);

/*
* C++ program execution starts
* from main() function
*/
int
main()
{
    /*
    * Number from which +1 should
    * be subtracted
    */
    long int long n { 
      read_input_number(
        std::format(
          "Enter a number from which Tanya will subtract '{0}': ",
          POSITIVE_ONE
        ),
        (long int long)(1LL)
      )
    };
    assert(
      n >= minimum_number_value
      &&
      n <= maximum_number_value
    );
    /*
    * Number of times +1 should
    * be subtracted
    */
    int k { 
      read_input_number(
        std::format(
          "How many times should Tanya subtract '{}' from '{}': ",
          POSITIVE_ONE,
          n
        ),
        (int)1
      )
    };
    assert(
      k >= minimum_number_of_subtractions
      &&
      k <= maximum_number_of_subtractions
    );
    /*
    * First subtraction operation
    */
    int operation {1};
    while ( operation <= k )
    {
        if ( is_ones_place_digit_nonzero(n) )
        {
          n -= ONE;
        }
        else if ( is_ones_place_digit_zero(n) )
        {
          n /= TEN;
        }
      operation += 1;
    }
    // Print the result
    std::cout<<n<<std::endl;
  /*
  * Return EXIT_SUCCESS to the
  * underlying operating-system
  */
  return EXIT_SUCCESS;
}

/**
 * 
 * @param P prompt string
 * @param N Data type of integral number
*/
template<typename P , typename N>
N
read_input_number(
  P prompt,
  N integral_input_number
)
{
    std::cout<<
    std::format(
      "{0}",
      prompt
    )<<std::endl;
    N input_number {};
    std::cin>>input_number;
  return input_number;
}

/**
 * 
 * @return  true if one's place
 * of a decimal number is greater
 * than ZERO(0) false otherwise
*/
bool
is_ones_place_digit_nonzero(
  int n
)
{
    constexpr int TEN {+10};
    int remainder { n % TEN };
  return ( remainder > 0 ) ? true : false;
}

/**
 * 
 * @return  true if one's place
 * of a decimal number is ZERO(0)
 * false otherwise
*/
bool
is_ones_place_digit_zero(
  int n
)
{
    constexpr int TEN {+10};
    int remainder { n % TEN };
  return ( remainder == 0 ) ? true : false;  
}